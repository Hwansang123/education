#include <stdio.h>                  //기본(입출력)헤더
#include <stdlib.h>                 //난수선언을 위한 헤더
#include <time.h>                   //시간을 선언하는 헤더.매번 다른 변수를 선언하기 위해 사용
#include <unistd.h>                 //Sleep을 사용하기 위한 헤더. 초단위로 사용가능



void ShowChoonsik(int(*map)[25], int column);           //춘식이의 모습을 보여주는 함수
void ShowSickChoonsik(int(*map)[25], int column);       //춘식이의 모습을 보여주는 함수(아픈모습)
void Moving(int (*map)[25], int column);                //춘식이의 랜덤 이동을 구현하는 함수
void SwapChoonshik(int *ptr1, int *ptr2);               //지금 위치와 다음 위치를 스왑하는 함수
double choonshik = 10;      //춘식이의 초기 몸무게
int love = 0;               //초기 애정도
int turn = 0;               //시작 턴수
double eat = 0.3;           //밥먹으면 늘어나는 몸무게
double poo = -0.2;          //줄어드는 몸무게
double sick = -0.5;         //아플때 줄어드는 몸무게
int loveplus=5;             //증가하는 애정도 수치
int i=0,j=0,x=0,y=0;        //배열의 값 및 이동하는 위치를 선언하기 위한 변수
int temp=0;                 //랜덤이동시 현재 위치를 저장할 임시값
int death=0;                //사망시 반복문을 벗아나기 위한 변수
int healing=0;              //질병에서 회복할 확률



int main(void)
{
    int map[25][25]=
    {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},    //1은 벽
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},    //0은 배경
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},    //9는 춘식이
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}

    };
    
    printf("춘식이 키우기를 시작합니다.\n");

    while (choonshik<99.9)
    {
        sleep(2);
        system("clear");
        ShowChoonsik(map, sizeof(map)/sizeof(map[0]));
        Moving(map, sizeof(map)/sizeof(map[0]));
        turn++;
        love +=loveplus;
        choonshik += eat;
        printf("밥을 먹어 몸무게가 %.2lfkg 증가합니다.\n",eat);
            if(eat)
            {
                int percent = rand()%100+1;
                    if(percent<51)
                    {
                        choonshik += poo;
                        printf("똥을 싸서 몸무게가 %.2lfkg 감소합니다.\n",poo);
                    }
            }
        printf("현재 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴째이다.\n",choonshik, love,turn);
        if(turn>1)
        {
            int ill = rand()%100+1;
                if(ill<10)
                {
                    while (choonshik>0)
                    {
                        sleep(2);
                        system("clear");
                        // printf("%d퍼센트\n",ill);        //확률 검증
                        ShowSickChoonsik(map, sizeof(map)/sizeof(map[0]));
                        Moving(map, sizeof(map)/sizeof(map[0]));
                        printf("춘식이가 병에 걸렸습니다.\n");
                        printf("춘식이가 병때문에 밥을 먹지 않습니다.\n");
                        printf("춘식이가 병때문에 지속적으로 살이 빠집니다.\n");
                        printf("현재 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴째이다.\n",choonshik, love,turn);
                        choonshik += sick;
                        turn++;
                        love+=loveplus;
                        int death1=rand()%100+1;
                        int healing=rand()%100+1;
                            if(death1<11)
                            {
                                system("clear");
                                ShowSickChoonsik(map, sizeof(map)/sizeof(map[0]));
                                // printf("%d퍼센트\n",death1);        //확률 검증
                                printf("춘식이가 죽었습니다.\n");
                                printf("춘식이키우기를 종료합니다.\n");
                                death=1;
                                break;
                            }
                            else if (healing<=love*0.1)
                            {
                                system("clear");
                                // printf("%d퍼센트\n",healing);        //확률 검증
                                printf("춘식이의 병이 나았습니다.\n");
                                printf("춘식이가 다시 밥을 먹기 시작합니다.\n");
                                break;
                            }
                    }
                }
        }
        if(death==1)
            break;
        if(choonshik<0)
        {
            system("clear");
            ShowSickChoonsik(map, sizeof(map)/sizeof(map[0]));
            printf("춘식이가 굶어 죽었습니다.\n");
            printf("춘식이키우기를 종료합니다.\n");
            break;
        }
    }
    printf("종료 당시 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴이다.",choonshik, love, turn);
    return 0;
}

void ShowChoonsik(int(*map)[25], int column)
{
    for(i =0; i<25 ; i++)
        {
            for(j=0 ; j<25 ; j++)
            {
                if(map[i][j]==1)
                    printf("⬜ ");
                else if (map[i][j]==0)
                    printf("   ");
                else if (map[i][j]==9)
                {
                    if(choonshik<30)
                        printf("🙂 ");
                    else if (30<=choonshik&&choonshik<50)
                        printf("😄 ");
                    else if (50<=choonshik&&choonshik<70)
                        printf("😃 ");
                    else if (70<=choonshik&&choonshik<90)
                        printf("😅 "); 
                    else if (90<=choonshik)
                        printf("🥰 ");
                }
            }
            printf("\n");
        }
}
void ShowSickChoonsik(int(*map)[25], int column)
{
    for(i =0; i<25 ; i++)
    {
        for(j=0 ; j<25 ; j++)
        {
            if(map[i][j]==1)
                printf("⬜ ");
            else if (map[i][j]==0)
                printf("   ");
            else if (map[i][j]==9)
                printf("😷 ");
        }
        printf("\n");
    }
}
void Moving(int (*map)[25], int column)
{
    for(i=0 ; i<25 ; i++)
        for(j=0 ; j<25; j++)
        {
            if(map[i][j]==9)
            {
                x=i;
                y=j;
            }
        }
    srand(time(NULL));
    int position = rand()%4;
    
    switch (position)
        {
            case 0:
                {   
                    if(map[x-1][y]==0)
                        SwapChoonshik(&map[x][y], &map[x-1][y]); break;
                }
            case 1:
                {
                    if(map[x+1][y]==0)
                        SwapChoonshik(&map[x][y], &map[x+1][y]); break;
                }
            case 2:
                {
                    if(map[x][y-1]==0)
                        SwapChoonshik(&map[x][y], &map[x][y-1]); break;
                }    
            case 3:
                {
                    if(map[x][y+1]==0)
                        SwapChoonshik(&map[x][y], &map[x][y+1]); break;
                }
        }
}
void SwapChoonshik(int *ptr1, int *ptr2)
{
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}