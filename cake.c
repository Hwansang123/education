#include <stdio.h>


int main(int argc, char avgv[])
{
    int total=0,sum=0,chioce=0,price=0,menu;
    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0;
    char *cake_menu[]={"고구마 케이크","초코 케이크","생크림 케이크","녹차 케이크","치즈 케이크","쇼콜라 하트","뷔슈 드 노엘"};
    char sorry[]={"죄송합니다. 준비된 해당 케이크가 부족합니다. 다른 상품을 구매해 주세요.\n"};
    int cake_price[]={11000, 12000, 13000, 14000, 15000, 16000, 17000};
    while(1)
    {
        printf("====================\n");
        printf("원하는 버튼을 선택 해 주세요\n");
        printf("1.케이크 메뉴\n2.결재\n");
        printf("====================\n");
        scanf("%d",&menu);
        
            if(menu==1)
            {
                printf("====================\n");
                printf("원하는 케이크를 선택 해 주세요\n");
                for(int i=0; i<7; i++)
                    printf("n%d. %s\n",i+1, cake_menu[i]);
                printf("====================\n");
                scanf("%d",&chioce);
                
                switch(chioce)
                {
                    case 1 : 
                        price += cake_price[0];
                        c1++;
                        if(c1>3)
                        {
                            printf("%s",sorry);
                            price -= cake_price[0];
                            c1--;
                        }
                        break;
                    case 2 : 
                        price +=cake_price[1];
                        c2++;
                        if(c2>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[1];
                            c2--;
                        }
                        break;
                    case 3 : 
                        price +=cake_price[2];
                        c3++;
                        if(c3>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[2];
                            c3--;
                        }
                        break;
                    case 4 : 
                        price +=cake_price[3];
                        c4++;
                        if(c4>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[3];
                            c4--;
                        }
                        break;
                    case 5 : 
                        price +=cake_price[4];
                        c5++;
                        if(c5>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[4];
                            c5--;
                        }
                        break;
                    case 6 : 
                        price +=cake_price[5];
                        c6++;
                        if(c6>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[5];
                            c6--;
                        }
                        break;
                    case 7 : 
                        price +=cake_price[6];
                        c7++;
                        if(c7>3)
                        {
                            printf("%s",sorry);
                            price-=cake_price[6];
                            c7--;
                        }
                        break;
                }
            }
            else if(menu==2)
            {
                printf("결재하실 금액은 총 %d원 입니다.",price);
                break;
            }
            
            // printf("%d",price);
        }
            
            
    }
    
