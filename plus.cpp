#include <iostream>
#include <sqlite3.h>
#include <string>
#include <cstring>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    sqlite3 *db;
    int b;
    sqlite3_stmt *res1, *res2, *res3,*res4,*res5;
    char *err_msg = 0;
    int rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
    if (rc != SQLITE_OK)
    {
        cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    string n1;
    string a="'(주)디지텍'";
    string sql1, sql2, sql3, sql4, sql5;
    sql1= "SELECT 회사명, 공고제목, 접수마감 FROM job WHERE 회사명="+a;
    sql1.append(";");
    sql2= "SELECT 근무지역, 근무일시, 경력, 학력, 급여 FROM job WHERE 회사명="+a;
    sql2.append(";");
    sql3= "SELECT 근무형태, 직급_직책, 접수방법, 제출서류, 전형절차  FROM job WHERE 회사명="+a;
    sql3.append(";");
    // sql4= "SELECT 접수방법, 제출서류, 전형절차 FROM job WHERE 회사명="+a;
    // sql4.append(";");
    sql4= "SELECT 우대사항 FROM job WHERE 회사명="+a;
    sql4.append(";");
    rc = sqlite3_prepare_v2(db, sql1.c_str(), -1, &res1, 0);
    if(rc!=SQLITE_OK)
    {
        cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
    }
    rc = sqlite3_prepare_v2(db, sql2.c_str(), -1, &res2, 0);
    if(rc!=SQLITE_OK)
    {
        cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
    }
    rc = sqlite3_prepare_v2(db, sql3.c_str(), -1, &res3, 0);
    if(rc!=SQLITE_OK)
    {
        cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
    }
    rc = sqlite3_prepare_v2(db, sql4.c_str(), -1, &res4, 0);
    if(rc!=SQLITE_OK)
    {
        cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
    }
    // rc = sqlite3_prepare_v2(db, sql5.c_str(), -1, &res5, 0);
    // if(rc!=SQLITE_OK)
    // {
    //     cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
    // }
    sqlite3_step(res1)==SQLITE_ROW;
    sqlite3_step(res2)==SQLITE_ROW;
    sqlite3_step(res3)==SQLITE_ROW;
    sqlite3_step(res4)==SQLITE_ROW;
    sqlite3_step(res5)==SQLITE_ROW;
    b=0;
    while(b!=1)
    {
        for(int i=0; i<sqlite3_column_count(res1);i++)
        {
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res1,i))));
            n1.append(": ");
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res1,i))));
            n1.append(" \t");
        }
        n1.append("\n");
        for(int i=0; i<sqlite3_column_count(res2);i++)
        {
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res2,i))));
            n1.append(": ");
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res2,i))));
            n1.append(" \t");
        }
        n1.append("\n");
        for(int i=0; i<sqlite3_column_count(res3);i++)
        {
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res3,i))));
            n1.append(": ");
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res3,i))));
            n1.append(" \t");
        }
        n1.append("\n");
        for(int i=0; i<sqlite3_column_count(res4);i++)
        {
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res4,i))));
            n1.append(": ");
            n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res4,i))));
            n1.append(" \t");
        }
        // n1.append("\n");
        // for(int i=0; i<sqlite3_column_count(res5);i++)
        // {
        //     n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_name(res5,i))));
        //     n1.append(" : ");
        //     n1.append(static_cast<string>(reinterpret_cast<const char *>(sqlite3_column_text(res5,i))));
        //     n1.append(" \t");
        // }
        n1.append("\n\n");
        b=1;
    }

    cout<<n1<<endl;   
    
}

// sqlite3_step(res1)==SQLITE_ROW&&sqlite3_step(res2)==SQLITE_ROW&&sqlite3_step(res3)==SQLITE_ROW&&sqlite3_step(res4)==SQLITE_ROW&&sqlite3_step(res5)==SQLITE_ROW