#include <stdio.h>

int main(void)
{   
    int ch_mone = 0;
    char menu1;
    char menu2;
    int price = 0;

    int money;
    
    printf("돈을 넣어주세요: ");
    scanf("%d", &money);

    if (money < 900)
    {
        printf("돈이 부족합니다. \n돈은 반환됩니다.");

        return 0;
    }
    if (money >= 900)
    {
        while (1)
        { 
            printf("메뉴를 골라주세요: 1. 콜라 1200 2. 우주맛 콜라 1900 3. 제로콜라 1200 4. 스프라이트 1100 \n");
            printf("5. 환타 900 6. 닥터페퍼 1100 7. 몬스터 1800 8. 파워에이드 1900 \n");
            printf("9. 네스티 1600 10. 글라소비타민 워터 2100 11. 미닛메이드 1700 12. 조지아 커피 900 \n"); 
            printf("13. 암바사 900 14. 마테차 1700 S. 계산 하기 X. 종료하기");
            printf("메뉴를 골라주세요: ");
            scanf(" %c%c", &menu1, &menu2);
            if (menu2 == '\n')
            {
                switch(menu1)
                {
                case '1':
                    printf("콜라를 골랐습니다. \n");
                    price += 1200;
                    break;
                case '2':
                    printf("우주맛 콜라를 골랐습니다. \n");
                    price += 1900;
                    break;
                case '3':
                    printf("제로콜라를 골랐습니다. \n");
                    price += 1200;
                    break;
                case '4':
                    printf("스프라이트를 골랐습니다. \n");
                    price += 1100;
                    break;
                case '5':
                    printf("환타를 골랐습니다. \n");
                    price += 900;
                    break;
                case '6':
                    printf("닥터페퍼를 골랐습니다. \n");
                    price += 1100;
                    break;
                case '7':
                    printf("몬스터를 골랐습니다. \n");
                    price += 1800;
                    break;
                case '8':
                    printf("파워에이드를 골랐습니다. \n");
                    price += 1900;
                    break;
                case '9':
                    printf("네스티를 골랐습니다. \n");
                    price += 1600;
                    break;
                case 'S':
                    printf("계산 하기를 골랐습니다. \n");
                    ch_mone = money - price;
                    if (ch_mone < 0)
                    {
                        printf("돈이 부족합니다. \n돈은 반환됩니다.");
                        
                        return 0;
                    }
                    else if (ch_mone >= 0)
                    {
                        printf("거스름돈은 %d", ch_mone);
                        
                        return 0;
                    }
                case 'X':
                    printf("종료하기를 골랐습니다. \n");
                    printf("넣으신 돈은 %d 원입니다. 돈은 반환됩니다.", money);

                    return 0;
                }
            }            
            else if (menu2 != '\n')
            {
                switch(menu2)
                {
                case '0':
                    printf("글라소 비타민 워터를 골랐습니다. \n");
                    price += 2100;
                    break;
                case '1':
                    printf("미닛에이드를 골랐습니다. \n");
                    price += 1700;
                    break;
                case '2':
                    printf("조지아 커피를 골랐습니다. \n");
                    price += 900;
                    break;
                case '3':
                    printf("암바사를 골랐습니다. \n");
                    price += 900;
                    break;
                case '4':
                    printf("마테차를 골랐습니다. \n");
                    price += 1700;
                    break;
                case 'S':
                    printf("계산 하기를 골랐습니다. \n");
                    ch_mone = money - price;
                    if (ch_mone < 0)
                    {
                        printf("돈이 부족합니다. \n돈은 반환됩니다.");
                        
                        return 0;
                    }
                    else if (ch_mone >= 0)
                    {
                        printf("거스름돈은 %d", ch_mone);
                        
                        return 0;
                    }
                case 'X':
                    printf("종료하기를 골랐습니다. \n");
                    printf("넣으신 돈은 %d 원입니다. 돈은 반환됩니다.", money);

                    return 0;
                }
            }    
        }
    }

    return 0;

}
