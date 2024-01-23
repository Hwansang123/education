#include <iostream>
#include <sqlite3.h>
#include <string>
#include <cstring>
#include <vector>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    sqlite3 *db;
    sqlite3_stmt *res, *res1, *res2;
    char *err_msg = 0;
    int rc = sqlite3_open("/home/aiot6/CProjects/edu/24/01/job.db", &db);
    if (rc != SQLITE_OK)
    {
        cerr<<(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    cout<<"검색하기 원하는 키워드를 입력하세요."<<endl;
    cout<<"  ";
    string keyword;
    getline(cin, keyword);

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