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
    sqlite3_stmt *res1, *res2, *res3;
    char *err_msg = 0;
    int rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
    if (rc != SQLITE_OK)
    {
        cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    string n1,n2;
    string a="'(주)디지텍'";
    // getline(cin, a);
    string sql1, sql2, sql3;
    sql1= "SELECT 회사명, 대표자명, 설립일, 기업형태 FROM job WHERE 회사명="+a;
    // cout<<sql1;
    sql1.append(";");
    sql2= "SELECT 주소, 홈페이지, 사원수, 평균연봉 FROM job WHERE 회사명="+a;
    sql2.append(";");
    sql3= "SELECT 업종, 사업내용, 매출액 FROM job WHERE 회사명="+a;
    sql3.append(";");
    rc = sqlite3_prepare_v2(db, sql1.c_str(), -1, &res1, 0);
    rc = sqlite3_prepare_v2(db, sql2.c_str(), -1, &res2, 0);
    rc = sqlite3_prepare_v2(db, sql3.c_str(), -1, &res3, 0);
    if(rc!=SQLITE_OK)
    {
        cerr<<"Failed to fetch data "<<sqlite3_errmsg(db);
    }
    while(sqlite3_step(res1)==SQLITE_ROW&&sqlite3_step(res2)==SQLITE_ROW&&sqlite3_step(res3)==SQLITE_ROW)
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
        n1.append("\n\n");
    }

    cout<<n1<<endl;   
    
}