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
        sqlite3_finalize(res);
        if(in.escape==0)
        {
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
                break;
            }
            if(in.PW!=in.s_pw)
            {
                in.escape=1;
            }
        }
        sqlite3_finalize(res);
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
}