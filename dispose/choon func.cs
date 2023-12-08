#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void ShowChoonshick(int i, int j);
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
    double choonshik = 10;
    int love = 0;
    int turn = 0;
    double eat = 0.3;
    double poo = -0.2;
    double sick = -0.5;
    int loveplus=5;
    int i=0,j=0,x=0,y=0;
    int temp=0;
    int death=0;
    int healing=0;

    while (choonshik<99.9)
    {
        // sleep(1);
        // system("clear");
        // for(i =0; i<25 ; i++)
        // {
        //     for(j=0 ; j<25 ; j++)
        //     {
        //         if(map[i][j]==1)
        //         {
        //             printf("⬜ ");
        //         }
        //         else if (map[i][j]==0)
        //         {
        //             printf("   ");
        //         }
        //         else if (map[i][j]==9)
        //         {
        //             printf("😃 ");
        //         }
        //     }
        //     printf("\n");
        // }
        // for(i=0 ; i<25 ; i++)
        // {
        //     for(j=0 ; j<25; j++)
        //     {
        //         if(map[i][j]==9)
        //         {
        //             x=i;
        //             y=j;
        //         }
        //     }
        // }
        // srand(time(NULL));
        // int position = rand()%4;
        // switch (position)
        // {
        // case 0:
        //     {   
        //         if(map[x-1][y]==0)
        //         {
        //             temp = map[x][y];
        //             map[x][y] = map[x-1][y];
        //             map[x-1][y] = temp;
        //             break;
        //         }
        //     }
        // case 1:
        //     {
        //         if(map[x+1][y]==0)
        //         {
        //             temp = map[x][y];
        //             map[x][y] = map[x+1][y];
        //             map[x+1][y] = temp;
        //             break;
        //         }
        //     }
        // case 2:
        //     {
        //         if(map[x][y-1]==0)
        //         {
        //             temp = map[x][y];
        //             map[x][y] = map[x][y-1];
        //             map[x][y-1] = temp;
        //             break;
        //         }
        //     }    
        // case 3:
        //     {
        //         if(map[x][y+1]==0)
        //         {
        //             temp = map[x][y];
        //             map[x][y] = map[x][y+1];
        //             map[x][y+1] = temp;
        //             break;
        //         }
        //     }
        // }
    turn++;
    love +=loveplus;
    choonshik += eat;
            if(eat)
            {
                int percent = rand()%100+1;
                    if(percent<51)
                    {
                        choonshik += poo;
                    }
            }
    printf("현재 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴째이다.\n",choonshik, love,turn);
        if(turn>2)
        {
            int percent = rand()%100+1;
                if(percent<11)
                {
                    while (choonshik>0)
                    {
                        sleep(1);
                        system("clear");
                        for(i =0; i<25 ; i++)
                        {
                            for(j=0 ; j<25 ; j++)
                            {
                                if(map[i][j]==1)
                                {
                                    printf("⬜ ");
                                }
                                else if (map[i][j]==0)
                                {
                                    printf("   ");
                                }
                                else if (map[i][j]==9)
                                {
                                    printf("😃 ");
                                }
                            }
                            printf("\n");
                        }
                        for(i=0 ; i<25 ; i++)
                        {
                            for(j=0 ; j<25; j++)
                            {
                                if(map[i][j]==9)
                                {
                                    x=i;
                                    y=j;
                                }
                            }
                        }
                        srand(time(NULL));
                        int position = rand()%4;
                        switch (position)
                        {
                        case 0:
                            {   
                                if(map[x-1][y]==0)
                                {
                                    temp = map[x][y];
                                    map[x][y] = map[x-1][y];
                                    map[x-1][y] = temp;
                                    break;
                                }
                            }
                        case 1:
                            {
                                if(map[x+1][y]==0)
                                {
                                    temp = map[x][y];
                                    map[x][y] = map[x+1][y];
                                    map[x+1][y] = temp;
                                    break;
                                }
                            }

                        case 2:
                            {
                                if(map[x][y-1]==0)
                                {
                                    temp = map[x][y];
                                    map[x][y] = map[x][y-1];
                                    map[x][y-1] = temp;
                                    break;
                                }
                            }    
                        case 3:
                            {
                                if(map[x][y+1]==0)
                                {
                                    temp = map[x][y];
                                    map[x][y] = map[x][y+1];
                                    map[x][y+1] = temp;
                                    break;
                                }
                            }
                        }
                        printf("춘식이가 병에 걸렸습니다.\n");
                        choonshik += sick;
                        turn++;
                        love+=loveplus;
                        printf("현재 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴째이다.\n",choonshik, love,turn);
                        int percent1=rand()%100+1;
                            if(percent1<11)
                            {
                                printf("춘식이가 죽었습니다.\n");
                                printf("게임을 종료합니다.\n");
                                death=1;
                                break;
                            }
                            else if (percent1<=love*0.1)
                            {
                                printf("춘식이의 병이 나았습니다.\n");
                                break;
                            }
                    }
                }
        }
        if(death==1)
            break;
        if(choonshik<0)
        {
            printf("춘식이가 죽었습니다.\n");
            break;
        }
    // printf("현재 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴째이다.\n",choonshik, love,turn);
    
    
    }
    printf("종료시 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴이다.",choonshik, love, turn);
    return 0;
}







void ShowChoonshick(int i, int j)
{
    int x=0,y=0,temp=0;
    sleep(1);
    system("clear");
    for(i=0 ; i<25 ; i++)
    {
        for(j=0 ; j<25 ; j++)
        {
            if(map[i][j]==1)
                printf("⬜ ")
            else if(map[i][j]==0)
                printf("  ");
            else if(map[i][j]==9)
                printf("😃 ");
        }
        printf("\n");
    }
    for(i=0 ; i<25 ; i++)
    {
        for(j=0 ; j<25 ; j++)
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
                {
                    temp = map[x][y];
                    map[x][y] = map[x-1][y];
                    map[x-1][y] = temp;
                    break;
                }
            }
        case 1:
            {
                if(map[x+1][y]==0)
                {
                    temp = map[x][y];
                    map[x][y] = map[x+1][y];
                    map[x+1][y] = temp;
                    break;
                }
            }
        case 2:
            {
                if(map[x][y-1]==0)
                {
                    temp = map[x][y];
                    map[x][y] = map[x][y-1];
                    map[x][y-1] = temp;
                    break;
                }
            }    
        case 3:
            {
                if(map[x][y+1]==0)
                {
                    temp = map[x][y];
                    map[x][y] = map[x][y+1];
                    map[x][y+1] = temp;
                    break;
                }
            }
        }
}