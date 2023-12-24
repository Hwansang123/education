#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int total=0, order=0,chioce=0,price=0,menu, i;
    int c[7]={0,0,0,0,0,0,0};
    char *cake_menu[]={"생크림 케이크", "고구마 케이크", "초코 케이크", "녹차 케이크", "치즈 케이크", "쇼콜라 하트", "뷔슈 드 노엘"};
    char sorry[]={"죄송합니다. 구매할 수 있는 케이크는 종류마다 1인 3개까지 입니다. 다른 상품을 구매해 주세요.\n"};
    int yyyy=0,mm=0,dd=0;
    int cake_price[]={11000, 12000, 13000, 14000, 15000, 16000, 17000};
    FILE * list;
    while(1)
    {
        system("clear");
        printf("====================\n");
        printf("원하는 버튼을 선택 해 주세요\n");
        printf("1.케이크 메뉴\n2.결재\n3.종료\n");
        printf("====================\n");
        scanf("%d",&menu);
        
            if(menu==1)
            {
                system("clear");
                printf("====================\n");
                printf("원하는 케이크를 선택 해 주세요\n");
                for(i=0; i<7; i++)
                    printf("n%d. %s\n",i+1, cake_menu[i]);
                printf("====================\n");
                scanf("%d",&chioce);
                
                switch(chioce)
                {
                    case 1 : 
                        system("clear");
                        price += cake_price[0];
                        c[0]++;
                        printf("%s를 선택 하셨습니다.\n",cake_menu[0]);
                        if(c[0]>3)
                        {
                            printf("%s",sorry);
                            price -= cake_price[0];
                            c[0]--;
                        }
                        sleep(1);
                        break;
                    case 2 : 
                        system("clear");
                        price +=cake_price[1];
                        c[1]++;
                        printf("%s를 선택 하셨습니다.\n",cake_menu[1]);
                        if(c[1]>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[1];
                            c[1]--;
                        }
                        sleep(1);
                        break;
                    case 3 : 
                        system("clear");
                        price +=cake_price[2];
                        c[2]++;
                        printf("%s를 선택 하셨습니다.\n",cake_menu[2]);
                        if(c[2]>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[2];
                            c[2]--;
                        }
                        sleep(1);
                        break;
                    case 4 : 
                        system("clear");
                        price +=cake_price[3];
                        c[3]++;
                        printf("%s를 선택 하셨습니다.\n",cake_menu[3]);
                        if(c[3]>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[3];
                            c[3]--;
                        }
                        sleep(1);
                        break;
                    case 5 : 
                        system("clear");
                        price +=cake_price[4];
                        c[4]++;
                        printf("%s를 선택 하셨습니다.\n",cake_menu[4]);
                        if(c[4]>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[4];
                            c[4]--;
                        }
                        sleep(1);
                        break;
                    case 6 : 
                        system("clear");
                        price +=cake_price[5];
                        c[5]++;
                        printf("%s를 선택 하셨습니다.\n",cake_menu[5]);
                        if(c[5]>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[5];
                            c[5]--;
                        }
                        sleep(1);
                        break;
                    case 7 : 
                        system("clear");
                        price +=cake_price[6];
                        c[6]++;
                        printf("%s을 선택 하셨습니다.\n",cake_menu[6]);
                        if(c[6]>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[6];
                            c[6]--;
                        }
                        sleep(1);
                        break;
                }
            }
            else if(menu==2)
            {
                system("clear");
                printf("결재하실 금액은 총 %d원 입니다.\n",price);
                puts("물건을 수령할 날짜를 입력해 주세요.\n");
                printf("원하는 년도를 입력해주세요.\n");
                scanf("%d",&yyyy);
                printf("원하는 월을 입력해주세요.\n");
                scanf("%d",&mm);
                printf("원하는 일자을 입력해 주세요.\n");
                scanf("%d",&dd);
                printf("선택한 날짜는 %d%d%d 입니다.\n",yyyy,mm,dd);
                sleep(1);

                list=fopen("list.txt","w+");
                for(i=0; i<7; i++)
                    fprintf(list, "%s, %d개\n.",cake_menu[i],c[i]);
                fprintf(list, "예약 날짜 %d%d%d",yyyy,mm,dd);
                fclose(list);
            }
            else if(menu==3)
            {
                system("clear");
                printf("종료를 선택하셨습니다.\n종료합니다.\n");
                break;
            }
            else
                printf("잘못 선택하셨습니다.\n다시 선택하세요.\n");
                
    }
    return 0;
}
