#include <stdio.h>
#include <stdlib.h>

int c[7]={0,0,0,0,0,0,0};
char *cake_menu[]={"생크림 케이크", "고구마 케이크", "초코 케이크", "녹차 케이크", "치즈 케이크", "쇼콜라 하트", "뷔슈 드 노엘"};
char sorry[]={"죄송합니다. 구매할 수 있는 케이크는 종류마다 1인 3개까지 입니다. 다른 상품을 구매해 주세요.\n"};
int cake_price[]={11000, 12000, 13000, 14000, 15000, 16000, 17000};
int price=0;

void pic(int i);
int main(void)
{
    int total=0, order=0,chioce=0,menu, i;
    // int c[7]={0,0,0,0,0,0,0};
    // char *cake_menu[]={"생크림 케이크", "고구마 케이크", "초코 케이크", "녹차 케이크", "치즈 케이크", "쇼콜라 하트", "뷔슈 드 노엘"};
    // char sorry[]={"죄송합니다. 구매할 수 있는 케이크는 종류마다 1인 3개까지 입니다. 다른 상품을 구매해 주세요.\n"};
    int yyyy=0,mm=0,dd=0;
    // int cake_price[]={11000, 12000, 13000, 14000, 15000, 16000, 17000};
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
                        pic(0);
                        break;
                    case 2 : 
                        pic(1);
                        break;
                    case 3 : 
                        pic(2);
                        break;
                    case 4 : 
                        pic(3);
                        break;
                    case 5 : 
                        pic(4);
                        break;
                    case 6 : 
                        pic(5);
                        break;
                    case 7 : 
                        pic(6);
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
void pic(int i)
{
    system("clear");
    price +=cake_price[i];
    c[i]++;
    printf("%s을 선택 하셨습니다.\n",cake_menu[i]);
    if(c[i]>3)
    {
        printf("%s",sorry);
        price-=cake_price[i];
        c[i]--;
    }
    sleep(1);
}