#include <iostream>
#include <sqlite3.h>
#include <string>
#include <cstring>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
struct log
{
    string ID;
    string s_id;
    string PW;
    string s_pw;
    string EMAIL;
    string s_email;
    string PHONE;
    string s_phone;
    int escape=0;
};

int main()
{
    log log;
    sqlite3 *db;
    sqlite3_stmt *res;
    char *err_msg = 0;
    
    int rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
    
    if (rc != SQLITE_OK)
    {
        cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        
        return 1;
    }
    cout<<"회원가입을 선택하셨습니다."<<endl;
    while(1)
    {
        cout<<"사용하길 원하는 ID를 입력해주세요"<<endl;
        cout<<"사용자 ID:";
        getline(cin,log.ID);
        rc = sqlite3_prepare_v2(db, "SELECT ID FROM member", -1, &res, 0);
        if(rc!=SQLITE_OK)
        {
            cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
        }
        while(sqlite3_step(res)==SQLITE_ROW)
        {
            log.escape=0;
            log.s_id = static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res,0)));
            if(log.ID==log.s_id)
            {
                cout<<"이미 존재하는 ID입니다"<<endl;
                sleep(1);
                system("clear");
                log.escape=1;
                break;
            }
        }
        if(log.escape==0)
        {
            break;
        }
        sqlite3_finalize(res);
    }

    while(1)
    {
        log.escape=0;
        int i, j, Lower=0, Upper=0, Special=0;
        int special[30]={'!','@','#','$','%','^','&','*','(',')','-','+','=','~','`','[',']',',','.','/','<','>','?',';',':','"','{','}','|','_'};//특수문자구분을 위해 배열로 구현
        string WARNINGS[] =
        {
            "길이는 4자리의 숫자만 가능합니다",
            "영어 소문자를 사용 할 수 없습니다.",
            "영어 대문자를 사용 할 수 없습니다.",
            "특수 문자를 사용 할 수 없습니다."
        };
        system("clear");
        cout<<"사용하길 원하는 비밀번호를 입력하세요"<<endl;
        cout<<"비밀번호는 4자리의 숫자만 가능합니다"<<endl;
        cout<<"비밀번호 : ";
        getline(cin, log.PW);
        for(i=0; i<log.PW.length();i++)
        {
            if (97 <= log.PW[i] && log.PW[i] <= 122) //Lower_case check
            {
                Lower = 1;
            }
            else if (65 <= log.PW[i] && log.PW[i] <= 90) //Upper_case check
            {
                Upper = 1;
            }
            else
            {
                for (j = 0; j < 12; j++)
                {
                    if (log.PW[i] == special[j])
                    {
                        Special = 1;
                        break;
                    }
                }
            }
        }
        if(log.PW.length()<0||log.PW.length()>4)
        {
            cout<<WARNINGS[0]<<endl;
            sleep(1);
            log.escape=1;            
            continue;
        }
        if(Lower==1)
        {
            cout<<WARNINGS[1]<<endl;
            sleep(1);            
            log.escape=1;
            continue;
        }
        if(Upper==1)
        {
            cout<<WARNINGS[2]<<endl;
            sleep(1);            
            log.escape=1;
            continue;
        }
        if(Special==1)
        {
            cout<<WARNINGS[3]<<endl;
            sleep(1);            
            log.escape=1;
            continue;
        }
        if(log.escape==0)
        {
            break;
        }
    }
    
    while(1)
    {
        log.escape=0;
        system("clear");
        cout<<"사용자 구분을 위한 E-MAIL 주소를 입력해 주세요."<<endl;
        cout<<"E-MAIL : ";
        getline(cin, log.EMAIL);
        rc = sqlite3_prepare_v2(db, "SELECT EMAIL FROM member", -1, &res, 0);
        if(rc!=SQLITE_OK)
        {
            cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
        }
        while(sqlite3_step(res)==SQLITE_ROW)
        {
            log.escape=0;
            log.s_email = static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res,0)));
            if(log.EMAIL==log.s_email)
            {
                cout<<"이미 존재하는 EMAIL 입니다"<<endl;
                sleep(1);
                system("clear");
                log.escape=1;
                break;
            }
        }
        sqlite3_finalize(res);
        if(log.escape==0)
        {
            break;
        }
    }

    while(1)
    {
        log.escape=0;
        system("clear");
        cout<<"사용자 구분을 위해 휴대폰 번호를 입력 해주세요."<<endl;
        cout<<"휴대폰 번호는 '-'을 포함해서 입력해주세요"<<endl;
        cout<<"휴대폰 번호 : ";
        getline(cin, log.PHONE);
        int num = log.PHONE.length();
        if(num<11&&num>14)
        {
            cout<<"잘못 입력하셨습니다. 다시 입력해주세요."<<endl;
            sleep(1);
            continue;
        }
        rc = sqlite3_prepare_v2(db, "SELECT PHONE FROM member", -1, &res, 0);
        if(rc!=SQLITE_OK)
        {
            cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
        }            
        while(sqlite3_step(res)==SQLITE_ROW)
        {
            log.escape=0;
            
            log.s_phone = static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res,0)));
            if(log.PHONE==log.s_phone)
            {
                cout<<"이미 존재하는 휴대폰 번호입니다"<<endl;
                sleep(1);
                system("clear");
                log.escape=1;
                break;
            }
        }
        sqlite3_finalize(res);
        if(log.escape==0)
        {
            break;
        }
    }
    
    string temp = "INSERT INTO member VALUES(""'"+log.ID+"'"+","+"'"+log.PW+"'"+","+"'"+log.EMAIL+"'"+","+"'"+log.PHONE+"'"+");";
    char *sql=const_cast<char*>(temp.c_str());
    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);
    if(rc!=SQLITE_OK)
    {
        cerr<<"SQL error: "<<err_msg<<endl;

        sqlite3_free(err_msg);
        sqlite3_close(db);
        return 1;
    }
    sqlite3_close(db);
}


// while(1)
// {
//     log.escape=0;
//     system("clear");
//     cout<<"사용자 구분을 위한 E-MAIL 주소를 입력해 주세요."<<endl;
//     cout<<"E-MAIL : ";
//     getline(cin, log.EMAIL);
//     rc = sqlite3_prepare_v2(db, "SELECT EMAIL FROM member", -1, &res, 0);
//     if(rc!=SQLITE_OK)
//     {
//         cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
//     }
//     while(sqlite3_step(res)==SQLITE_ROW)
//     {
//         log.escape=0;
//         log.s_email = static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res,0)));
//         if(log.EMAIL==log.s_email)
//         {
//             cout<<"이미 존재하는 EMAIL 입니다"<<endl;
//             sleep(1);
//             system("clear");
//             log.escape=1;
//             break;
//         }
//     }
//     sqlite3_finalize(res);
//     if(log.escape==0)
//     {
//         break;
//     }
// }