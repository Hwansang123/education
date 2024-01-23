#include <iostream>
#include <fstream>
#include <sqlite3.h>
#include <string>
#include <vector>
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

int main(void)
{
    while(1)
    {
        ifstream file;
        file.open("/home/aiot6/CProjects/poject/004.JOBIN/logo");
        if(!file.is_open())
        {
            cout<<"나 지금 거기 없다."<<endl;
            return 0;
        }
        while (!file.eof())
        {
            string door;
            getline(file, door);
            cout<<door<<endl;
        }
        file.close();
        // sleep(1);
        // system("clear");
        cout<<'\t'<<"┌──────────────────────────────┐"<<endl;
        cout<<'\t'<<"│           1. 로그인          │"<<endl;
        cout<<'\t'<<"│           2. 회원가입        │"<<endl;
        cout<<'\t'<<"│           3. 종료            │"<<endl;
        cout<<'\t'<<"└──────────────────────────────┘"<<endl;
        cout<<"원하는 메뉴를 선택해주세요."<<endl;
        cout<<"메뉴 : ";
        char choice_number;
        cin>>choice_number;
        cin.ignore();
        switch (choice_number)
        {
        case '1':
        {
            log in;
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
            system("clear");
            cout<<"로그인을 선택하셨습니다."<<endl;
            while(1)
            {
                cout<<"접속하길 원하는 ID를 입력하세요"<<endl;
                cout<<"ID : " ;
                getline(cin, in.ID);
                rc = sqlite3_prepare_v2(db, "SELECT ID FROM member", -1, &res, 0);
                if(rc!=SQLITE_OK)
                {
                    cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
                }
                while(sqlite3_step(res)==SQLITE_ROW)
                {
                    in.escape=0;
                    in.s_id = static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res,0)));
                    if(in.ID==in.s_id)
                    {
                        break;
                    }
                    if(in.ID!=in.s_id)
                    {
                        in.escape=1;
                    }
                }
                
                if(in.escape==0)
                {
                    sqlite3_finalize(res);
                    break;
                }
                if(in.escape==1)
                {
                    cout<<"존재하지 않는 ID 입니다."<<endl;
                    cout<<"다시 확인해 주세요."<<endl;
                    sleep(1);
                    system("clear");
                    continue;
                }
            }
            while(1)
            {
                cout<<"비밀번호 : ";
                getline(cin, in.PW);
                rc = sqlite3_prepare_v2(db, "SELECT PW FROM member", -1, &res, 0);
                if(rc!=SQLITE_OK)
                {
                    cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
                }
                while(sqlite3_step(res)==SQLITE_ROW)
                {
                    in.escape=0;
                    in.s_pw = static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res,0)));
                    if(in.PW==in.s_pw)
                    {
                        sqlite3_finalize(res);
                        break;
                    }
                    if(in.PW!=in.s_pw)
                    {
                        in.escape=1;
                    }
                }
                if(in.escape==0)
                {
                    break;
                }
                if(in.escape==1)
                {
                    cout<<"비밀번호가 일치 하지 않습니다."<<endl;
                    cout<<"다시 확인해 주세요."<<endl;
                    sleep(1);
                    system("clear");
                    continue;
                }
            }
            cout<<"로그인 되었습니다"<<endl;
            cout<<in.ID<<"님 환영합니다."<<endl;
            sqlite3_close(db);
            sleep(1);
            system("clear");
            // sqlite3 *db;
            sqlite3_stmt *res1, *res2;
            // char *err_msg = 0;
            rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
            if (rc != SQLITE_OK)
            {
                cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
                sqlite3_close(db);
                return 1;
            }
            srand(time(NULL));
            int rnum[5]={};
            for(int i=0;i<5;i++)
            {
                rnum[i] = rand()%60+1;
                for(int j=0;j<i;j++)
                {
                    if(rnum[j]==rnum[i])
                    {
                        i--;
                    }
                }
            }
            string n1;
            string sql1, sql2;
            sql1= "SELECT 회사명, 접수마감, 급여 FROM job WHERE 번호="+to_string(rnum[0]);
            for(int i=1; i<5; i++)
            {
                sql1.append(" or 번호="+to_string(rnum[i]));
            }
            sql1.append(";");
            sql2= "SELECT 공고제목 FROM job WHERE 번호="+to_string(rnum[0]);
            for(int i=1; i<5; i++)
            {
                sql2.append(" or 번호="+to_string(rnum[i]));
            }
            sql2.append(";");
            rc = sqlite3_prepare_v2(db, sql1.c_str(), -1, &res1, 0);
            rc = sqlite3_prepare_v2(db, sql2.c_str(), -1, &res2, 0);
            if(rc!=SQLITE_OK)
            {
                cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
            }
            while(sqlite3_step(res1)==SQLITE_ROW&&sqlite3_step(res2)==SQLITE_ROW)
            {
                for(int i=0; i<sqlite3_column_count(res1);i++)
                {
                    n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res1,i))));
                    n1.append(": ");
                    n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res1,i))));
                    n1.append(" \t");
                    
                }
                n1.append("\n");
                n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res2,0))));
                n1.append(": ");
                n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res2,0))));
                n1.append("\n\n");
            }
            sqlite3_finalize(res1);
            sqlite3_finalize(res2);
            sqlite3_close(db);
            cout<<n1<<endl;
            cout<<"원하는 검색 방식을 선택하세요."<<endl;
            cout<<"1. 간편검색      2.상세검색"<<endl;
            cin>>choice_number;
            system("clear");
            cin.ignore();
            switch (choice_number)
            {
            case '1':
            {
                sqlite3_stmt *res, *res1, *res2;
                // char *err_msg = 0;
                rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
                if (rc != SQLITE_OK)
                {
                    cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
                    sqlite3_close(db);
                    return 1;
                }
                cout<<"원하는 키워드를 입력하세요."<<endl;
                cout<<"  ";
                string keyword;
                getline(cin, keyword);
                cout<<keyword<<"을 검색하셨습니다."<<endl;

                vector <int> pkList;
                int num;
                string sql, tmp;
                sql = "SELECT * From job;";
                rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &res, 0);   
                if(rc!=SQLITE_OK)
                {
                    cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
                }
                while(sqlite3_step(res)==SQLITE_ROW)
                {
                    num=sqlite3_column_int(res,0);
                    for(int i=1;i<sqlite3_column_count(res);i++)
                    {
                        tmp.append((char*)sqlite3_column_text(res,i));

                    }
                    if(tmp.find(keyword)!=std::string::npos)
                    {
                        pkList.push_back(num);
                    }
                    tmp.clear();
                }
                sqlite3_finalize(res);

                string n1;
                string sql1, sql2;
                sql1= "SELECT 회사명, 접수마감, 급여 FROM job WHERE 번호="+to_string(pkList[0]);
                for(int i=1; i<pkList.size(); i++)
                {
                    sql1.append(" or 번호="+to_string(pkList[i]));
                }
                sql1.append(";");
                sql2= "SELECT 공고제목 FROM job WHERE 번호="+to_string(pkList[0]);
                for(int i=1; i<pkList.size(); i++)
                {
                    sql2.append(" or 번호="+to_string(pkList[i]));
                }
                sql2.append(";");
                rc = sqlite3_prepare_v2(db, sql1.c_str(), -1, &res1, 0);
                rc = sqlite3_prepare_v2(db, sql2.c_str(), -1, &res2, 0);
                if(rc!=SQLITE_OK)
                {
                    cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
                }
                while(sqlite3_step(res1)==SQLITE_ROW&&sqlite3_step(res2)==SQLITE_ROW)
                {
                    for(int i=0; i<sqlite3_column_count(res1);i++)
                    {
                        n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res1,i))));
                        n1.append(": ");
                        n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res1,i))));
                        n1.append(" \t");
                        
                    }
                    n1.append("\n");
                    n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res2,0))));
                    n1.append(": ");
                    n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res2,0))));
                    n1.append("\n\n");
                }
                sqlite3_finalize(res1);
                sqlite3_finalize(res2);
                cout<<"검색 건수 : "<<pkList.size()<<endl;
                cout<<n1<<endl;
            }
                break;
            case '2':
            {
                sqlite3_stmt *res, *res1, *res2;
                rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
                if (rc != SQLITE_OK)
                {
                    cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
                    sqlite3_close(db);
                    return 1;
                }
                cout<<"3가지 키워드를 사용해 검색합니다."<<endl;
                string keyword1,keyword2,keyword3;    
                cout<<"첫번째 키워드를 입력하세요."<<endl;
                getline(cin, keyword1);
                cout<<"두번째 키워드를 입력해주세요."<<endl;
                getline(cin, keyword2);
                cout<<"세번째 키워드를 입력해주세요."<<endl;
                getline(cin, keyword3);

                vector <int> pkList;
                int num;
                string sql, tmp;
                sql = "SELECT * From job;";
                rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &res, 0);   
                if(rc!=SQLITE_OK)
                {
                    cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
                }
                while(sqlite3_step(res)==SQLITE_ROW)
                {
                    num=sqlite3_column_int(res,0);
                    for(int i=1;i<sqlite3_column_count(res);i++)
                    {
                        tmp.append((char*)sqlite3_column_text(res,i));

                    }
                    if(tmp.find(keyword1)!=std::string::npos&&tmp.find(keyword2)!=std::string::npos&&tmp.find(keyword3)!=std::string::npos)
                    {
                        pkList.push_back(num);
                    }
                    tmp.clear();
                }
                sqlite3_finalize(res);

                string n1;
                string sql1, sql2;
                sql1= "SELECT 회사명, 접수마감, 근무지역, 급여 FROM job WHERE 번호="+to_string(pkList[0]);
                for(int i=1; i<pkList.size(); i++)
                {
                    sql1.append(" or 번호="+to_string(pkList[i]));
                }
                sql1.append(";");
                sql2= "SELECT 공고제목 FROM job WHERE 번호="+to_string(pkList[0]);
                for(int i=1; i<pkList.size(); i++)
                {
                    sql2.append(" or 번호="+to_string(pkList[i]));
                }
                sql2.append(";");
                rc = sqlite3_prepare_v2(db, sql1.c_str(), -1, &res1, 0);
                rc = sqlite3_prepare_v2(db, sql2.c_str(), -1, &res2, 0);
                if(rc!=SQLITE_OK)
                {
                    cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
                }
                while(sqlite3_step(res1)==SQLITE_ROW&&sqlite3_step(res2)==SQLITE_ROW)
                {
                    for(int i=0; i<sqlite3_column_count(res1);i++)
                    {
                        n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res1,i))));
                        n1.append(" \t");
                        
                    }
                    n1.append("\n");
                    n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res2,0))));
                    n1.append("\n\n");
                }
                sqlite3_finalize(res);
                cout<<"검색 건수"<<pkList.size()<<endl;
                cout<<n1<<endl;
            }
                break;
            default:
                break;
            }
            
        }//로그인파트를 감싸는 중괄호
            break;
        case '2':
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
            system("clear");
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
                    system("clear");
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
            break;
        case '3':
        {
            cout<<"종료를 선택하셨습니다."<<endl;
            sleep(2);
        }
            return 0;
        
        default:
        {
            system("clear");
            cout<<"잘못 선택하셨습니다. 다시 선택해주세요."<<endl;
            sleep(1);
            system("clear");
        }
            break;
        }
    }
}
