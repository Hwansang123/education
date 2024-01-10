#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

struct Player
{
    char Name[50];
    char E_Name[50];
    char Birth[20];
    char Position[20];
    char High[20];
    char Wight[20];
    char Team[50];
};
Player per[26]={
        {"오현규, ", "OH Hyeongyu, ", "2001.04.12, ","FW, ","183cm, ","72kg, ","셀틱FC"},
        {"정우영, ", "JEONG Wooyeong, ", "1999.09.20, ","FW, ","180cm, ","70kg, ","VfB 슈투트가르트(독일)"},
        {"조규성, ", "CHO Guesung, ", "1998.01.25, ","FW, ","189cm, ","82kg, ","FC 미트윌란"},
        {"문선민, ", "MOON Seonmin, ", "1992.06.09, ","MF, ","172cm, ","68kg, ","전북현대모터스"},
        {"박용우, ", "PARK Yongwoo, ", "1993.09.10, ","MF, ","186cm, ","79kg, ","알 아인"},
        {"손흥민, ", "SON Heungmin, ", "1992.07.08, ","MF, ","183cm, ","78kg, ","토트넘(잉글랜드)"},
        {"양현준, ", "YANG Hyunjun, ", "2002.05.25, ","MF, ","179cm, ","73kg, ","셀틱FC"},
        {"이강인, ", "LEE Kangin, ", "2001.02.19, ","NF, ","174cm, ","72kg, ","파리 생제르맹 FC"},
        {"이순민, ", "LEE Soonmin, ", "1994.05.22, ","MF, ","178cm, ","73kg, ","광주FC"},
        {"이재성, ", "LEE Jaesung, ", "1992.08.10, ","MF, ","180cm, ","70kg, ","FSV 마인츠05(독일)"},
        {"홍현석, ", "HONG Hyunseok, ", "1999.06.16, ","MF, ","175cm, ","66kg, ","KAA 헨트"},
        {"황인범, ", "HWWANG Inbeom, ", "1996.09.20, ","MF, ","177cm, ","70kg, ","FK 츠르베나 즈베즈다"},
        {"황희찬, ", "HWANG Heechan, ", "1996.01.25, ","MF, ","177cm, ","77kg, ","울버린햄튼원더러스(잉글랜드)"},
        {"김민재, ", "KIM Minjae, ", "1996.11.15, ","DF, ","190cm, ","88kg, ","FC 바이에른 뮌헨"},
        {"김영권, ", "KIM Younggwon, ", "1990.02.27, ","DF, ","186cm, ","83kg, ","울산현대"},
        {"김주성, ", "KIM Jusung, ", "2000.12.12, ","DF, ","186cm, ","76kg, ","FC서울"},
        {"김지수, ", "KIM Jisoo, ", "2004.12.24, ","DF, ","183cm, ","73kg, ","브렌트포드 FC"},
        {"김진수, ", "KIM Jinsu, ", "1992.06.13, ","DF, ","177cm, ","68kg, ","전북현대모터스"},
        {"김태환, ", "KIM Taehwan, ", "1989.07.24, ","DF, ","177cm, ","72kg, ","울산현대"},
        {"박진섭, ", "PARK Jinseop, ", "1995.10.23, ","DF, ","182cm, ","75kg, ","전북현대모터스"},
        {"설영우, ", "SEOL Youngwoo, ", "1998.12.05, ","DF, ","180cm, ","72kg, ","울산현대"},
        {"이기제, ", "LEE Kije, ", "1991.07.09, ","DF, ","176cm, ","68kg, ","수원삼성블루윙즈"},
        {"정승현, ", "JUNG Seunghyun, ", "1994.04.03, ","DF, ","188cm, ","74kg, ","울산현대"},
        {"김승규, ", "KIM Seunggyu, ", "1990.09.30, ","GK, ","187cm, ","84kg, ","알샤밥(사우디아라비아)"},
        {"송범근, ", "SONG Bumkeun, ", "1997.10.15, ","GK, ","194cm, ","88kg, ","쇼난 밸마레"},
        {"조현우, ", "JO Hyeonwoo, ", "1991.09.25, ","GK, ","189cm, ","75kg, ","울산현대"}
    };
struct Coach
{
    char Name[50];
    char E_Name[50];
    char Birth[20];
    char Position[20];
};
Coach coa[7]=
    {
        {"위르겐 클린스만, ", "JURGEN Klinsmann, ", "1964.07.30, ", "감독"},
        {"안드레아스 헤어초크, ", "ANDREAS Herzog, ", "1968.09.10, ", "수석 코치"},
        {"차두리, ", "CHA Duri, ", "1980.07.25, ", "코치"},
        {"파올로 스트링가라, ", "PAOLO Stingara, ", "1962.09.22, ", "코치"},
        {"안드레아스 쾨프케, ", "ANDREAS Kopke, ", "1962.03.12, ", "GK코치"},
        {"베르너 로이타드, ", "WERNER Leuthard, ", "1992.01.24, ", "피지컬 코치"},
        {"이재홍, ", "LEE Jaehong, ", "1983.03.23, ", "피지컬 코치"}
    };
// struct Country
// {
//     char A[20];
//     char B[20];
//     char C[20];
//     char D[20];
// };
struct Member
{
    string ID,PW,E_mail,Phone;
    string temp;
    string s_id;//ID
    string s_pw;//비밀번호
    string s_email;//이메일
    string s_phone;//휴대폰
    string s_uid;
    int UID;
    int special[30]={'!','@','#','$','%','^','&','*','(',')','-','+','=','~','`','[',']',',','.','/','<','>','?',';',':','"','{','}','|','_'};//특수문자구분을 위해 배열로 구현
    int n_special=0;//특수문자 사용을 특정하기 위한 변수
};
/*User_Id*/
// struct Chair
// {
//     char Area[20];
//     char Seat[20];
//     // char 
// };
int login=0;//로그인이 되었는지 확인하는 변수
int main(void)
{
    ifstream readFile;
    readFile.open("door.csv");
    if(readFile.is_open())                      //파일열림 확인. !을써서 안열릴때 경고문을 적을수도 있다.
    {
        while(!readFile.eof())                  //eof가 아닐때 까지 와일문 돈다
        {
            string door;
            getline(readFile, door);
            cout<<door<<endl;
        }
    }
    readFile.close();
    sleep(1);
    char Choice_page=0;//페이지 이동을 위해 사용자에게 문자를 입력받는 변수
    int choice_number=0;//페이지 이동을 위해 사용자에게 숫자를 입력받는 변수
    while(1)
    {
        system("clear");
        cout<<"     AFC 카타르 아시안컵 2023"<<endl;
        cout<<"     기간 : 2024/01/12 ~ 2024/02/10"<<endl;
        cout<<"     개최지 : 카타르 도하, 알 와크라, 알 라이얀, 알 코르"<<endl;
        cout<<"     중계 : tvN, tvN SPORTS, 쿠팡플레이"<<endl;
        cout<<"     1. 참가국 및 조별 정보"<<endl;
        cout<<"     2. 한국 대표팀 명단"<<endl;
        cout<<"     3. 조별 경기 일정"<<endl;
        if(login==0)
        {
            cout<<"     7. 회원가입"<<endl;
            cout<<"     8. 로그인"<<endl;
            cout<<"     9. ID, PW 찾기"<<endl;
        }
        if(login==1)
        {
            cout<<"     4. 경기 예매"<<endl;
            cout<<"     5. 예매 정보 확인"<<endl;
        }
        cout<<"     0. 종료"<<endl;
        cout<<"\n"<<endl;
        cout<<"원하는 메뉴의 버튼을 입력해 주세요 :";
        // cout<<login<<endl;           //로그인이 안되면 0 되면 1표시
        
        cin>>choice_number;
        cin.get();
        
        switch (choice_number)
        {
        case 1://참가국정보 파트
            {
                system("clear");
                cout<<"참가국 정보"<<endl;
                cout<<"A조 : 카타르, 중국, 레바논, 타지키스탄"<<endl;
                cout<<"B조 : 호주, 우즈벡키스탄, 시리아, 인도"<<endl;
                cout<<"C조 : 이란, 아랍에미리트, 팔레스트아니, 홍콩"<<endl;
                cout<<"D조 : 일본, 이라크, 베트남, 인도네시아"<<endl;
                cout<<"E조 : 대한민국, 요르단, 바레인, 말레이시아"<<endl;
                cout<<"F조 : 사우디아라비아, 오만, 키르기스스탄, 태국\n"<<endl;
                cout<<'\n';
                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. ";
                cin>>Choice_page;
                if(Choice_page=='b'||Choice_page=='B')
                {
                    break;
                }
                else
                {
                    system("clear");
                    cout<<"잘못된 선택입니다."<<endl;
                    sleep(1);
                    system("clear");
                }
                break;
            }
        case 2://대표팀 선수,코치
            {
                system("clear");
                cout<<"'선수'"<<endl;
                for(int i=0;i<26;i++)
                    cout<<per[i].Name<<per[i].E_Name<<per[i].Birth<<per[i].Position<<per[i].High<<per[i].Wight<<per[i].Team<<endl;
                cout<<'\n';
                cout<<"감독,코치명단이 보고싶다면 'c'를, 이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. ";
                cin>>Choice_page;
                if(Choice_page=='b'||Choice_page=='B')
                    break;
                else if (Choice_page=='c'||Choice_page=='C')
                {
                    system("clear");
                    cout<<"'감독,코치'"<<endl;
                    for(int i=0;i<7;i++)
                        cout<<coa[i].Name<<coa[i].E_Name<<coa[i].Birth<<coa[i].Position<<endl;
                    cout<<'\n';
                    cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. ";
                    cin>>Choice_page;
                    if(Choice_page=='b'||Choice_page=='B')
                        break;
                }
                break;
            }
        case 3://조별 경기안내 파트
            {
                while(1)            
                {
                    system("clear");
                    cout<<"원하는 조를 선택 해 주세요"<<endl;
                    cout<<"1.A조, 2.B조, 3.C조, 4.D조, 5.E조, 6.F조"<<endl;
                    cout<<'\n';
                    cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                    cin>>Choice_page;
                    cin.get();
                    switch(Choice_page)
                    {
                        case '1' :
                            {
                                system("clear");
                                cout<<"1. 카타르 VS 레바논 2024.01.13 토요일 오전 01:00"<<endl;
                                cout<<"2. 중국 VS 타지키스탄 2024.01.13 토요일 오후 23:30"<<endl;
                                cout<<"3. 레바논 VS 중국 2024.01.17 수요일 오후 20:30"<<endl;
                                cout<<"4. 타지키스탄 VS 카타르 2024.01.17 수요일 오후 23:30"<<endl;
                                cout<<"5. 타지키스탄 VS 레바논 2024.01.23 화요일 오전 00:00"<<endl;
                                cout<<"6. 카타르 VS 중국 2024.01.23 화요일 오전 00:00"<<endl;
                                cout<<'\n';
                                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                                cin>>Choice_page;
                                if(Choice_page=='b'||Choice_page=='B')
                                {
                                    break;
                                }
                            }
                        case '2':
                            {
                                system("clear");
                                cout<<"1. 호주 VS 인도 2024.01.13 토요일 오후 20:30"<<endl;
                                cout<<"2. 우즈벡키스탄 VS 시리아 2024.01.14 일요일 오전 02:30"<<endl;
                                cout<<"3. 시리아 VS 호주 2024.01.18 목요일 오후 20:30"<<endl;
                                cout<<"4. 인도 VS 우즈벡키스탄 2024.01.18 목요일 오후 23:30"<<endl;
                                cout<<"5. 시리아 VS 인도 2024.01.23 화요일 오후 20:30"<<endl;
                                cout<<"6. 호주 VS 우즈벡키스탄 2024.01.23 화요일 오후 20:30"<<endl;
                                cout<<'\n';
                                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                                cin>>Choice_page;
                                if(Choice_page=='b'||Choice_page=='B')
                                {
                                    break;
                                }
                            }
                        case '3':
                            {
                                system("clear");
                                cout<<"1. 아랍에미리트 VS 홍콩 2024.01.14 일요일 오후 23:30"<<endl;
                                cout<<"2. 이란 VS 팔레스트아니 2024.01.15 월요일 오전 02:30"<<endl;
                                cout<<"3. 팔레스트아니 VS 아랍에미리트 2024.01.19 금요일 오전 02:30"<<endl;
                                cout<<"4. 홍콩 VS 이란 2024.01.20 토요일 오후 02:30"<<endl;
                                cout<<"5. 홍콩 VS 팔레스트아니 2024.01.24 수요일 오전 00:00"<<endl;
                                cout<<"6. 이란 VS 아랍에미리트 2024.01.24 수요일 오전 00:00"<<endl;
                                cout<<'\n';
                                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                                cin>>Choice_page;
                                if(Choice_page=='b'||Choice_page=='B')
                                {
                                    break;
                                }
                            }
                        case '4':
                            {
                                system("clear");
                                cout<<"1. 일본 VS 베트남 2024.01.14 일요일 오후 20:30"<<endl;
                                cout<<"2. 인도네시아 VS 이라크 2024.01.15 월요일 오후 23:30"<<endl;
                                cout<<"3. 이라크 VS 일본 2024.01.19 금요일 오후 20:30"<<endl;
                                cout<<"4. 베트남 VS 인도네시아 2024.01.19 금요일 오후 23:30"<<endl;
                                cout<<"5. 일본 VS 인도네시아 2024.01.24 수요일 오후 20:30"<<endl;
                                cout<<"6. 이라크 VS 베트남 2024.01.24 수요일 오후 20:30"<<endl;
                                cout<<'\n';
                                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                                cin>>Choice_page;
                                if(Choice_page=='b'||Choice_page=='B')
                                {
                                    break;
                                }
                            }
                        case '5':
                            {
                                system("clear");
                                cout<<"1. 대한민국 VS 바레인 2024.01.15 월요일 오후 20:30"<<endl;
                                cout<<"2. 말레이시아 VS 요르단 2024.01.16 화요일 오전 02:30"<<endl;
                                cout<<"3. 요르단 VS 대한민국 2024.01.20 토요일 오후 20:30"<<endl;
                                cout<<"4. 바레인 VS 말레이시아 2024.01.20 토요일 오후 23:30"<<endl;
                                cout<<"5. 대한민국 VS 말레이시아 2024.01.25 목요일 오후 20:30"<<endl;
                                cout<<"6. 요르단 VS 바레인 2024.01.25 목요일 오후 20:30"<<endl;
                                cout<<'\n';
                                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                                cin>>Choice_page;
                                if(Choice_page=='b'||Choice_page=='B')
                                {
                                    break;
                                }
                            }
                        case '6':
                            {
                                system("clear");
                                cout<<"1. 태국 VS 키르기스스탄 2024.01.16 화요일 오후 23:30"<<endl;
                                cout<<"2. 사우디아라비아 VS 오만 2024.01.17 수요일 오전 02:30"<<endl;
                                cout<<"3. 오만 VS 태국 2024.01.21 일요일 오후 23:30"<<endl;
                                cout<<"4. 키르기스스탄 VS 사우디아라비아  2024.01.22 월요일 오전 02:30"<<endl;
                                cout<<"5. 키르기스스탄 VS 오만 2024.01.26 금요일 오전 00:00"<<endl;
                                cout<<"6. 사우디아라비아 VS 태국 2024.01.26 금요일 오전 00:00"<<endl;
                                cout<<'\n';
                                cout<<"이전 메뉴로 돌아가고 싶다면 'b'을 입력해 주세요. "<<endl;
                                cin>>Choice_page;
                                if(Choice_page=='b'||Choice_page=='B')
                                {
                                    break;
                                }
                            }
                        case 'B':
                            break;
                        case 'b':
                            break;
                        default :
                            {
                                system("clear");
                                cout<<"잘못된 선택입니다."<<endl;
                                sleep(1);
                                system("clear");
                            }
                    }
                }
            }
        case 8://로그인 파트
            {
                Member log;
                cout<<"로그인을 선택하셨습니다."<<endl;
                cout<<"사용자 : ";
                getline(cin, log.ID);
                ifstream file;               //파일 오픈을 위한 변수 선언
                file.open("/home/aiot6/CProjects/edu/24/01/project/account.csv");    //파일 오픈
                if(!file.is_open())          //파일이 없으면
                {
                    cout<<"파일이 없음 ㅜㅡ";
                    return 0;
                }

                while(1)                     //중복 검사를 위한 반복
                {
                    getline(file, log.s_id, ',');//ID만 가져오기
                    getline(file, log.s_pw, ',');
                    getline(file, log.s_email, ',');
                    getline(file, log.s_phone, ',');
                    getline(file, log.s_uid, ',');
                    file.get();
                    // file>>log.temp;
                    if(file.eof())
                        break;
                    // cout<<log.s_id<<endl;
                    if(log.ID.compare(log.s_id)==0)
                    {
                        cout<<"비밀번호 : ";
                        getline(cin, log.PW);
                        if(log.PW.compare(log.s_pw)==0)
                        {
                            cout<<"로그인 되었습니다."<<endl;
                            login=1;
                            break;
                        }
                    }
                }
                file.close();
                break;
            }
        case 7://회원가입 파트
            {
                Member n_log;
                int a;                                    //반복문 탈출을 위한 변수
                cout<<"회원가입을 선택하셨습니다"<<endl;
                cout<<"회원가입을 진행합니다"<<endl;
                while(1)
                {
                    a=0;
                    cout<<"사용하실 ID를 10자 이내로 입력해 주세요"<<endl;
                    cout<<"사용자 ID : ";
                    getline(cin,n_log.ID);      //사용자가 입력하는 문자열을 구조체 멤버에 대입
                    // cin.get();
                    // cout<<n_log.ID.length();
                    if(n_log.ID.length()>10)            //.length 구조체의 길이를 반환하는 함수 ID 생성조건인 10자 이내를 검사
                    {
                        cout<<"잘못 입력하셨습니다. 다시 입력해주세요."<<endl;
                        sleep(1);
                        // system("clear");
                        continue;                       //while문 탈출이 아니라 다시 입력해야하니 continue 사용
                    }
                    ifstream file;                  //fstream으로 함수 선언
                    file.open("/home/aiot6/CProjects/edu/24/01/project/account.csv");       //회원정보가 들어있는 파일의 경로
                    if(!file.is_open())             //is_open함수
                    {
                        cout<<"나 지금 여기 없다."<<endl;
                        return 0;
                    }
                    while(!file.eof())
                    {
                        getline(file, n_log.s_id, ',');//ID만 가져오기
                        // getline(file, log.s_pw, ',');
                        // getline(file, log.s_email, ',');
                        // getline(file, log.s_phone, ',');
                        // getline(file, log.s_uid, ',');
                        file>>n_log.temp;               //ID 제외하고 임시값에 넣기
                        file.get();
                        if(n_log.ID.compare(n_log.s_id)==0)
                        {
                            // sleep(2);
                            cout<<"이미 등록된 ID입니다. 다시 입력해 주세요."<<endl;
                            sleep(1);
                            a=1;                                    //a가 1이면 ID파트 while문 탈출 불가
                            break;
                        }
                    }
                    file.close();
                    if(a==0)                                        //a가 0이면 ID파트 while문 탈출
                    {
                        break;
                    }
                }
                while(1)
                {
                    a=0;
                    cout<<"사용하실 비밀번호를 20자 이내로 입력해 주세요"<<endl;
                    cout<<"최소 1개의 특수문자가 사용되어야 합니다."<<endl;
                    cout<<"비밀번호 : ";
                    getline(cin, n_log.PW);
                    if(n_log.PW.length()>20)
                    {
                        cout<<"잘못 입력하셨습니다. 다시 입력해주세요."<<endl; 
                        sleep(1);
                        continue;
                    }
                    for(int i=0;i<n_log.PW.length(); i++)
                        for(int j=0; j<sizeof(n_log.special);j++)
                            if(n_log.PW[i]==n_log.special[j])
                                n_log.n_special=1;
                    if(n_log.n_special==0)
                    {
                        cout<<"최소 1개의 특수문자가 포함되어야 합니다."<<endl;
                        sleep(1);
                        continue;
                    }
                    a=0;
                    if(a==0)
                    {
                        break;
                    }
                }
                while(1)
                {
                    a=0;
                    cout<<"이메일을 입력해주세요."<<endl;
                    cout<<"이메일 : ";
                    getline(cin, n_log.E_mail);
                    ifstream file;
                    file.open("/home/aiot6/CProjects/edu/24/01/project/account.csv");
                    if(!file.is_open())
                    {
                        cout<<"나 지금 여기 없다."<<endl;
                        return 0;
                    }
                    while(!file.eof())
                    {
                        getline(file, n_log.s_id, ',');//ID만 가져오기
                        getline(file, n_log.s_pw, ',');//비밀번호만 받아오기
                        getline(file, n_log.s_email, ',');//이메일만 받아오기
                        // getline(file, log.s_phone, ',');
                        // getline(file, log.s_uid, ',');
                        file>>n_log.temp;               //ID 제외하고 임시값에 넣기
                        file.get();
                        if(n_log.E_mail.compare(n_log.s_email)==0)
                        {
                            cout<<"중복되는 이메일이 존재합니다."<<endl;
                            a=1;
                            sleep(1);
                            break;
                        }
                    }
                    file.close();
                    if(a==0)
                    {
                        break;
                    }
                }
                while(1)
                {
                    a=0;
                    cout<<"휴대폰 번호를 '-'을 포함해서 입력해 주세요."<<endl;
                    cout<<"휴대폰 번호 :";
                    getline(cin, n_log.Phone);
                    if(n_log.Phone.length()<11&&n_log.Phone.length()>14)
                    {
                        cout<<"잘못 입력하셨습니다. 다시 입력해주세요."<<endl;
                        sleep(1);
                        continue;
                    }
                    ifstream file;
                    file.open("/home/aiot6/CProjects/edu/24/01/project/account.csv");
                    if(!file.is_open())
                    {
                        cout<<"나 지금 여기 없다."<<endl;
                        return 0;
                    }
                    while(!file.eof())
                    {
                        getline(file, n_log.s_id, ',');//ID
                        getline(file, n_log.s_pw, ',');//PW
                        getline(file, n_log.s_email, ',');//이메일
                        getline(file, n_log.s_phone, ',');//휴대폰 번호만 받아오기
                        // getline(file, log.s_uid, ',');
                        file>>n_log.temp;               //임시값에 넣기
                        file.get();
                        if(n_log.Phone.compare(n_log.s_phone)==0)
                        {
                            cout<<"중복되는 휴대폰 번호가 존재합니다."<<endl;
                            a=1;
                            sleep(1);
                            break;
                        }
                    }
                    file.close();
                    if(a==0)
                    {
                        break;
                    }
                }
                ifstream file;              //UID를 뽑기 위한 파일 오픈
                file.open("/home/aiot6/CProjects/edu/24/01/project/account.csv");
                if(!file.is_open())
                {
                    cout<<"나 지금 여기 없다."<<endl;
                    return 0;
                }
                while(!file.eof())
                {
                    getline(file, n_log.s_id, ',');
                    getline(file, n_log.s_pw, ',');
                    getline(file, n_log.s_email, ',');
                    getline(file, n_log.s_phone, ',');
                    getline(file, n_log.s_uid, ',');
                    file.get();
                }
                file.close();
                cout<<"입력하신 정보를 다시 확인해 주세요"<<endl;
                cout<<"ID : "<<n_log.ID<<endl;
                cout<<"PW : "<<n_log.PW<<endl;
                cout<<"E-mail : "<<n_log.E_mail<<endl;
                cout<<"Phone number : "<<n_log.Phone<<endl;
                // cout<<n_log.s_uid<<endl;
                // sleep(100);
                n_log.UID=stoi(n_log.s_uid);                  //stoi 스트링에서 int로 형변환
                cout<<"회원번호 : "<<n_log.UID+1<<endl;
                cout<<"초기 화면으로 되돌아갑니다. 로그인을 하시면 됩니다."<<endl;
                sleep(2);
                ofstream outFile;
                outFile.open("/home/aiot6/CProjects/edu/24/01/project/account.csv",ios::app);
                outFile<<n_log.ID<<","<<n_log.PW<<","<<n_log.E_mail<<","<<n_log.Phone<<","<<n_log.UID+1<<","<<endl;
                outFile.close();
            }
            break;

        case 0://종료 파트
            return 0;
            
        }/*첫번째(메인화면)스위치문*/
    }/*와일문을 감싸고 있음*/
}/*메인*/


