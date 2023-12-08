#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


void SwapChoonshik(int *ptr1, int *ptr2);
void ShowChoonsik(int(*map)[25], int column);
void ShowSickChoonsik(int(*map)[25], int column);
void Moving(int (*map)[25], int column);

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
    printf("춘식이 키우기를 시작합니다.\n");

    while (choonshik<99.9)
    {
        sleep(1);
        system("clear");
        ShowChoonsik(map, sizeof(map)/sizeof(map[0]));
        
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
        Moving(map, sizeof(map)/sizeof(map[0]));
        // srand(time(NULL));
        // int position = rand()%4;
        // switch (position)
        // {
        //     case 0:
        //         {   
        //             if(map[x-1][y]==0)
        //             {
        //                 SwapChoonshik(&map[x][y], &map[x-1][y]);
        //                 break;
        //             }
        //         }
        //     case 1:
        //         {
        //             if(map[x+1][y]==0)
        //             {
        //                 SwapChoonshik(&map[x][y], &map[x+1][y]);
        //                 break;
        //             }
        //         }
        //     case 2:
        //         {
        //             if(map[x][y-1]==0)
        //             {
        //                 SwapChoonshik(&map[x][y], &map[x][y-1]);
        //                 break;
        //             }
        //         }    
        //     case 3:
        //         {
        //             if(map[x][y+1]==0)
        //             {
        //                 SwapChoonshik(&map[x][y], &map[x][y+1]);
        //                 break;
        //             }
        //         }
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
        if(turn>1)
        {
            int ill = rand()%100+1;
                if(ill<10)
                {
                    
                    while (choonshik>0)
                    {
                        sleep(1);
                        system("clear");
                        printf("%d퍼센트\n",ill);
                        ShowSickChoonsik(map, sizeof(map)/sizeof(map[0]));
                        Moving(map, sizeof(map)/sizeof(map[0]));
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
                        //             SwapChoonshik(&map[x][y], &map[x-1][y]);
                        //             break;
                        //         }
                        //     }
                        // case 1:
                        //     {
                        //         if(map[x+1][y]==0)
                        //         {
                        //             SwapChoonshik(&map[x][y], &map[x+1][y]);
                        //             break;
                        //         }
                        //     }
                        // case 2:
                        //     {
                        //         if(map[x][y-1]==0)
                        //         {
                        //             SwapChoonshik(&map[x][y], &map[x][y-1]);
                        //             break;
                        //         }
                        //     }    
                        // case 3:
                        //     {
                        //         if(map[x][y+1]==0)
                        //         {
                        //             SwapChoonshik(&map[x][y], &map[x][y+1]);
                        //             break;
                        //         }
                        //     }
                        // }
                        printf("춘식이가 병에 걸렸습니다.\n");
                        printf("춘식이가 병때문에 밥을 먹지 않습니다.\n");
                        printf("춘식이가 병때문에 지속적으로 살이 빠집니다.\n");
                        choonshik += sick;
                        turn++;
                        love+=loveplus;
                        printf("현재 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴째이다.\n",choonshik, love,turn);
                        int death=rand()%100+1;
                        int healing=rand()%100+1;
                            if(death<11)
                            {
                                printf("%d퍼센트\n",death);
                                printf("춘식이가 죽었습니다.\n");
                                printf("춘식이키우기를 종료합니다.\n");
                                death=1;
                                break;
                            }
                            else if (healing<=love*0.1)
                            {
                                printf("%d퍼센트\n",healing);
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
            printf("춘식이가 굶어 죽었습니다.\n");
            printf("춘식이키우기를 종료합니다.\n");
            break;
        }
    }
    printf("종료 당시 춘식이의 몸무게는 %.2lfkg, 애정도는 %d, 턴은 %d턴이다.",choonshik, love, turn);
    return 0;
}



void SwapChoonshik(int *ptr1, int *ptr2)
{
    int temp=0;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


void ShowChoonsik(int(*map)[25], int column)
{
    int i=0,j=0;
    double choonshik=10;
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
    int i,j;
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
                printf("😷 ");
        }
        printf("\n");
    }
}



void Moving(int (*map)[25], int column)
{
    int x=0, y=0, i,j;
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
                        SwapChoonshik(&map[x][y], &map[x-1][y]);
                        break;
                    }
                }
            case 1:
                {
                    if(map[x+1][y]==0)
                    {
                        SwapChoonshik(&map[x][y], &map[x+1][y]);
                        break;
                    }
                }
            case 2:
                {
                    if(map[x][y-1]==0)
                    {
                        SwapChoonshik(&map[x][y], &map[x][y-1]);
                        break;
                    }
                }    
            case 3:
                {
                    if(map[x][y+1]==0)
                    {
                        SwapChoonshik(&map[x][y], &map[x][y+1]);
                        break;
                    }
                }
        }
}
// void PositionChoonshik()
// {
//     int i,j,x,y;
    
//     for(i=0 ; i<25 ; i++)
//         {
//             for(j=0 ; j<25; j++)
//             {
//                 if(map[i][j]==9)
//                 {
//                     x=i;
//                     y=j;
//                 }
//             }
//         }
// }