#include<stdio.h>
// int main(void)
// {
//     printf("Hello Everybody\n");
//     printf("%d\n", 1234);
//     printf("%d %d\n", 10, 20);
//     return 0;
// }
// int main()
// {
//     printf("my age : %d \n", 20);
//     printf("%d is my point", 100);
//     printf("good \nmoning \nevrybody\n");
//     return 0;
// }
// int main()
// {
//     int num;
//     num = 20;
//     printf("%d", num);
// }

// int main()
// {
//     int num1, num2;
//     int num3=30, num4=40;
//     printf("num1: %d, num2: %d\n", num1, num2);
//     num1=10;
//     num2=20;
//     printf("num1: %d, num2: %d \n", num1, num2);
//     printf("num3: %d, num4: %d \n", num3, num4);
//     return 0;
// }
// int main()
// {
//     int num1=12;
//     int num2=12;
//     printf("num1: %d \n", num1);
//     printf("num1++: %d \n", num1++);
//     printf("num1:%d \n\n", num1);

//     printf("num2:%d \n", num2);
//     printf("++num2: %d \n", ++num2);
//     printf("num2 : %d \n", num2);
//     // return 0 ;
// }

// int main()
// {
//     // int num1;
//     // int num2;
//     int num1=0;
//     int num2=10;
//     int result1 = (num1++ +num2);
//     // printf("%d" , result1);
//     int result2=++num1 + num2++;
//     int result3=num1-- + num1-- - --num2;
//     int result4=num2++ * num1++ - --num2 + num1;
//     printf("result1:%d, num1:%d, num2:%d\n",result1, num1, num2);
//     printf("result2:%d, num1:%d, num2:%d\n",result2, num1, num2);
//     printf("result3:%d, num1:%d, num2:%d\n",result3, num1, num2);
//     printf("result4:%d, num1:%d, num2:%d\n",result4, num1, num2);
    
//     return 0;   
// }
// int main()
// {
//     // int num1;
//     // int num2;
//     int num1=0;
//     int num2=12;
//     int result1 = num1 + num2;
//     printf("%d", result1);
//     return 0;
// }

// int main()
// {
//     int result;
//     int num1, num2;
//     printf("정수 one: ");
//     scanf("%d", &num1);
//     printf("정수 two: ");
//     scanf("%d", &num2);

//     result=num1+num2;
//     printf("%d + %d = %d \n", num1, num2, result);
//     return 0;
// }

// int main()
// {
//     int result;
//     int num1, num2, num3;
//     printf("세 개의 정수 입력 : ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     result = num1+num2+num3;
//     printf("%d + %d + %d = %d\n", num1, num2, num3, result);
//     return 0;
// }

// int main()       문제 1번
// {
//     int result1, result2;
//     int num1, num2;
//     printf("두개의 정수를 입력하세요. : ");
//     scanf("%d %d", &num1, &num2);
//     result1 = num1 * num2;
//     result2 = num1 / num2;
//     printf("%d* %d = %d \n",num1, num2, result1);
//     printf("%d / %d = %d",num1, num2,result2);
//     return 0;
// }

// int main()       문제 2번
// {
//     int result;
//     int num1, num2, num3;
//     printf("세개의 정수를 입력해주세요.: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     result = num1 * num2 + num3;
//     printf("%d * %d + %d = %d", num1, num2, num3, result);
//     return 0;
// }


// int main()       문제 3번
// {
//     int result;
//     int num;
//     printf("정수를 입력하세요.: ");
//     scanf("%d", &num);
//     result = num * num;
//     printf("%d * %d = %d", num, num, result);
//     return 0;
// }

// int main()       문제 4번
// {
//     int result;
//     int num1, num2, num3;
//     printf("두개의 정수를 입력하세요.: ");
//     scanf("%d %d",&num1, &num2);
//     num3 = num1%num2;
//     result = num1/num2;
//     printf("%d / %d = %d 나머지 %d\n", num1, num2, result, num3);
//     return 0;
// }

// int main()
// {
//     int result;
//     int num1, num2, num3;
//     printf("세개의 정수를 입력하세요.: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     result = (num1 - num2) * (num2+num3) * (num3%num1);
//     int a1 = (num1 - num2);
//     int a2 = (num2 + num3);
//     int a3 = (num3 % num1);

//     printf("(%d-%d) x (%d+%d) x(%d %% %d) = %d",num1, num2, num2, num3, num3, num1, result);
//     return 0;
// }
// int main()
// {
//     int num1=2;
//     int num2=3;
//     int result1=num1&num2;
//     int result2=num1|num2;
//     int result3=num1^num2;
//     printf("%d\n", result1);
//     printf("%d\n", result2);
//     printf("%d\n", result3);
//     return 0;
// }

// int main()
// {
//     int num1=0001;
//     int result1 = num1 << 1;
//     printf("%d\n", result1);
//     int result2 = result1 << 2;
//     printf("%d\n", result2);
//     int result3 = result2 >> 3;
//     printf("%d\n", result3);
// }

// int main()
// {
//     int num;
//     printf("정수를 입력하시오.: ");
//     scanf("%d", &num);
//     int result = ~num+1;
//     printf("%d\n", result);
//     return 0;
// }

// int main()
// {
//     int num1=3,num2=8,num3=4;
//     int result1 = num1 << 3;
//     printf("%d\n", result1);
//     int result2 = result1 >> 2;
//     printf("%d", result2);
//     return 0;
// }
// int main()
// {
//     char ch=9;
//     int inum=1052;
//     double dnum=3.1415;
//     printf("변수 ch의 크기 : %d \n", sizeof(ch));
//     printf("변수 inum의 크기 : %d\n",sizeof(inum));
//     printf("변수 dnum의 크기 : %d \n", sizeof(dnum));
//     return 0;
// }
// int main()
// {
//     double rad;
//     double area;
//     printf("원의 반지름을 입력하세요. :");
//     scanf("%lf", &rad);
//     area = rad*rad*3.1415;
//     printf("원의 넓이 : %f \n", area);
//     return 0;
// }

// int main()
// {
//     char ch1='A',ch2=65;
//     int ch3='Z', ch4=90;
//     printf("%c %d\n", ch1, ch1);
//     printf("%c %d\n", ch2, ch2);
//     printf("%c %d\n", ch3, ch3);
//     printf("%c %d\n", ch4, ch4);
//     return 0;
// }

// int main()
// {
//     int X1, Y1;
//     int X2, Y2;
//     printf("각 좌표를 정수로 입력하시오.: ");
//     scanf("%d",&X1);
//     scanf("%d",&Y1);
//     scanf("%d",&X2);
//     scanf("%d",&Y2);
//     int res1= X2-X1;
//     int res2= Y2-Y1;
//     int res3= res1*res2;
//     printf("입력받은 두점의 가로의 길이는 %d이고 세로의 길이는 %d이며 그로 만들어지는 사각형의 넓이는 %d이다.", res1, res2, res3);
//     return 0;
// }

// int main()
// {
//     double x;
//     double y;
//     printf("각 x와 y에 들어갈 실수를 입력하시오. : ");
//     scanf("%lf", &x);
//     scanf("%lf", &y);
//     double res1 = x + y;
//     double res2= x-y;
//     double res3= (x*y);
//     double res4= (x / y);    
//     printf("덧셈%f , 뺄셈%f, 곱셈%f, 나누셈%f", res1, res2, res3, res4);
//     return 0;
// }

// int main()
// {
//     int ch1;
//     printf("정수를 입력하세요. : ");
//     scanf("%d", &ch1);
//     printf("%c \n%d", ch1, ch1);
//     return 0;
// }
// int main()
// {
//     char ch1;
//     printf("알파멧을 입력하세요. : ");
//     scanf("%c", &ch1);
//     printf("%c \n%d", ch1, ch1);
//     return 0;
// }

// int main()
// {
//     int num1, num2,num3;
//     printf("세개의 정수를 입력하시오. : ");
//     scanf("%d  %o  %x", &num1, &num2, &num3);
//     printf("입력된 정수 10진수 출력: ");
//     printf("%d %d %d\n", num1, num2, num3);
//     return 0;

// }

// int main()
// {
//     float num1;
//     double num2;
//     long double num3;
//     printf("실수입력1(e 표기법으로): " );
//     scanf("%f", &num1);
//     printf("입력된 실수 %f\n", num1);
    
//     printf("실수입력2(e 표기법으로): " );
//     scanf("%lf",&num2);
//     printf("입력된 실수 %f \n", num2);

//     printf("실수입력3(e 표기법으로): " );
//     scanf("%Lf",&num3);
//     printf("입력된 실수 %LF\n",num3);
//     return 0;
// }

// int main()
// {
//     int dan=0, num=1;
//     printf("몇단?");
//     scanf("%d", &dan);
//     while(1)
//     {
//         printf(" %d x %d = %d \n", dan, num, dan*num);
//         num++;
//     }
//     return 0;
// }

// int main()           문제1
// {
//     int num1, num2=0;    
//     printf("(Hello world!)를 반복하고 싶은 만큼의 정수를 입력하시오. : ");
//     scanf("%d", &num1);
//     while(num2<num1)
//     {
//         printf("Hello world!\n");
//         num2++;
//     }
//     return 0;
// }*
//     scanf("%d", &num1);
    
//     while(num2<10)
//     {
//         int num3=num1*num2;
//         printf("%d\n",num3);
//         num2++;
//     }
//     return 0;
// }

// int main()
// {
//     int cur=2;
//     int is=0;
//     while(cur<10)
//     {
//         is=1;
//         while(is<10)
//         {
//             printf("%d x %d = %d\n", cur, (10-is), cur*(10-is));
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }
// int main()
// {
//     int num;
//     int total;
//     int set=1;
//     printf("1이상의 정수를 입력해주세요.: ");
//     scanf("%d", &num);
//     while(0<set<6)
//     {
//         total +=num;
//         set++;
//     }
//     printf("%d", total);
// }


// int main()
// {
//     int total = 0, num = 0;
//     do
//     {
//         printf("정수를 입력(0 to quit): ");
//         scanf("%d",&num);
//         total += num;
//     } while (num!=0);
//     printf("합계: %d \n", total);
//     return 0;
    
// }

// int main()
// {
//     int total=0;
//     int i, num;
//     printf("0부터 num까지의 덧셈, num은? ");
//     scanf("%d", &num);

//     for (i = 0; i <num+1; i++)
//     {
//         total +=i;
//     }
//     printf("0부터 %d까지 덧셈 결과 : %d \n", num, total);
//     return 0;
// }
// int main()
// {
//     double total=0.0;
//     double input=0.0;
//     int num=0;

//     for( ; input>=0.0 ; )
//     {
//         total +=input;
//         printf("실수 입력(minus to quit): ");
//         scanf("%lf", &input);
//         num++;
//     }
//     printf("평균: %f\n", total/(num-1));
//     return 0;
// }

// int main()
// {
//     int cur, is;
//     for(cur=2; cur<10; cur++)
//     {
//         founsigned int i, j,k;
    // if(i>0 && i<25)
    //     for(j=2;j<i;j++){
    //         for(k=2;k<j;k++){
    //             if(j%k==0){
    //                 printf("%d",i);
    //             }r(is=1; is<10; is++)
//         printf("%d x %d = %d\n",cur, is, cur*is);
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int cur, is;
//     cur=2;
//     while(cur<10)
//     {
//         is=1;
//         while(is<10)
//         {
//             printf("%d x %d = %d\n", cur, (10-is), cur*(10-is));
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }

// int main()
// {
//     int num,set1;
//     int set2=1;
//     float total=0;
//     printf("몇 번을 입력 할지 선택 하세요. :");
//     scanf("%d", &set1);
//     while(set2<=set1)
//     {
//         printf("계산할 정수를 입력하세요. :");
//         scanf("%d", &num);
//         total+=num;
//         set2++;
//     }
//     printf("%f", total/(set1));
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("정수를 입력. : ");
//     scanf("%d", &num);
//     if(num<0)
//     {
//         printf("입력값이 0보다 작습니다.\n");
//     }
//     if(num>0)
//     {
//         printf("입력값이 0보다 큽니다. \n");
//     }
//     if(num=0)
//     {
//         printf("입력값이 0입니다.\n");
//     }
//     return 0;
// }

// int main()
// {
//     int opt;
//     double num1, num2, result;
//     printf("1.덧셈, 2.뺄셈, 3.곱셈, 4.나눗셈\n");
//     scanf("%d", &opt);
//     printf("두개의 실수를 입력하세요. : ");
//     scanf("%lf %lf",&num1,&num2);
//     if(opt==1)
//         result = num1 + num2;
//     if(opt==2) 
//         result = num1 - num2;
//     if(opt==3)
//         result = num1 * num2;
//     if(opt==4)
//         result = num1 / num2;
        
//     printf("결과값은 %f 입니다.\n",result);
//     return 0;
// }

// int main()
// {
//     int num;
//     for(num=1;num<100;num++)
//     {
//         if(num%3==0&&num%4==0)
//         printf("3 또는 4의 배수 : %d \n",num);
//     }
//     return 0;
// }


// int main()
// {
//     int opt;
//     double num1, num2, result;
//     printf("1. 덧셈,\t2. 뺄셈,\t3. 곱셈, \t4. 나누셈\t");
//     scanf("%d", &opt);
//     printf("계산 할 두 실수를 입력 하시오. : ");
//     scanf("%lf %lf", &num1, &num2);
//     if(opt==1)
//         result = num1 + num2;
//     else if (opt==2)
//         result = num1 - num2;
//     else if (opt==3)
//         result = num1 * num2;
//     else if (opt==4)
//         result = num1 / num2;
    
//     printf("결과 값은 %f 이다\n",result);
//     return 0;  
// }

// int main()
// {
//     int num, abs;
//     printf("원하는 정수를 입력하세요. : ");
//     scanf("%d", &num);

//     abs = num>0 ? num:num*(-1);
//     printf("절대값: %d \n", abs);
//     return 0;
// }


// int main()
// {
//     int sum=0, num=0;
//     while(1)
//     {
//         sum +=num;
//         if(sum>5000)
//             break;
//         num++;
//     }
//     printf("sum : %d\n",sum);
//     printf("num : %d\n", num);
//     return 0;
// }

// int main()
// {
//     int num;
//     printf("Start! ");
//     for(num=1;num<20;num++)
//     {
//         if(num%2==0 || num%3==0)
//             continue;
//         printf("%d ",num);                           
//     }
//     printf("end! \n");
//         return 0;
// }


// int main()
// {
//     int num;
//     printf("1 이상 5이하의 정수를 입력하시오. : ");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("1은 ONE\n");
//         break;
//     case 2:
//         printf("2는 TWO\n");
//         break;
//     case 3:
//         printf("3은 THREE\n");
//         break;
//     case 4:
//         printf("4는 FOUR\n");
//         break;
//     case 5:
//         printf("5는 FIVE\n");
//         break;
//     default:
//         printf(" I don't know! \n");
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     char eng;
//     printf(" M은 오전, A는 오후, E는 저녁 \n");
//     printf("입력 : ");
//     scanf("%c", &eng);

//     switch (eng)
//     {
//     case 'm':
//     case 'M':
//         printf("Monning! \n");
//         break;
//     case 'a':
//     case 'A':
//         printf("Afternoon! \n");
//         break;
//     case 'e':
//     case 'E':
//         printf("Evening\n");
//     }
// }



// int main()
// {
//     int num1, num2;
//     num1=printf("12345\n");
//     num2=printf("난 집이 좋아\n");
//     printf("%d %d \n", num1, num2);
//     return 0;
// }


// int Add(int num1, int num2)
// {
//     return num1+num2;
// }

// int main()
// {
//     int result;
//     result = Add(3, 4);
//     printf("덧셈 결과1: %d \n",result);
//     result = Add(5, 8);
//     printf("덧셈 결과2: %d \n",result);
//     return 0;
// }


// int Add(int num1, int num2)
// {
//     return num1+num2;
// }

// void ShowAddResult(int num)
// {
//     printf("덧셈 결과 출력: %d \n", num);
// }

// int ReadNum()
// {
//     int num;
//     scanf("%d", &num);
//     return num;
// }

// void HowToUseThisProg()
// {
//     printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//     printf("자! 그럼 두개의 정수를 입력하세요. \n");
// }

// int main()
// {
//     int result, num1, num2;
//     HowToUseThisProg();
//     num1=ReadNum();
//     num2=ReadNum();
//     result = Add(num1, num2);
//     ShowAddResult(result);
//     return 0;
// }

// int AbsoCompare(int num1, int num2);
// int GetAbsoValue(int num);

// int main()
// {8
//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d와 %d중 절댓값이 큰 정수: %d \n",
//     num1, num2, AbsoCompare(num1, num2));
//     return 0;
// }
// int AbsoCompare(int num1, int num2)
// {
//     if(GetAbsoValue(num1) > GetAbsoValue(num2))
//         return num1;
//     else
//         return num2;
// }

// int GetAbsoValue(int num)
// {
//     if(num<0)
//         return num*(-1);
//     else
//         return num;
// }






// int main()
// {
//     int num, sum;
//     for(num=1;num<100;num++)
//     {
//         if(num%7==0||num%9==0)
//         {
//             printf("7또는 9의 배수 : %d\n", num);
//         }
//         // if (num%9==0)
//         // {
//         //     printf("9의 배수 : %d\n",num);            
//         // }
        
//     }
    
// }

// // 입력한 수중 가장 큰수와 가장 작은수 구하기
// double Plus(double a, double b, double c);
// double Minus(double a, double b, double c);


// int main()
// {
//     double a, b, c;
//     double max, min;
//     printf("세개의 정수를 입력 : ");
//     scanf("%lf %lf %lf", &a, &b, &c);
//     printf("%f %f %f중 가장 큰 수는 %f 가장 작은 수는 %f이다.",
//     a, b, c, Plus(a, b, c), Minus(a, b, c));
// }
// double Plus(double a, double b, double c)
// {
//     if(a>b&&a>c)
//         return a;
//     else if (b>a&&b>c)
//         return b;
//     else if (c>a&&c>b)
//         return c;

// }
// double Minus(double a, double b, double c)
// {
//     if (a<b && a<c)
//         return a;
//     else if (b<a && b<c)
//         return b;
//     else if (c<a &&c<b)
//         return c;
// }

// int CelToFah(int num);
// int FahtoCel(int num);

// int main()
// {
//     int num, f1, c1;
//     char temp;
//     printf("원하는 온도를 선택: ");
//     scanf("%d", &num);
    
//     printf("섭씨 C, 화씨 F : ");
//     scanf("%c", &temp);
//     switch (temp)
//     {
//     case 'c':
//     case 'C':
//         f1=(1.8)*num+32;
//         printf("섭씨%d도에서 화씨로 바꾸면 %d도 입니다",num, f1);
//         break;
    
//     case 'f':
//     case 'F':
//         c1=num/(1.8)-32;
//             printf("화씨 %d도에서 섭씨로 바꾸면 %d도 입니다.",num, c1);
//         break;
//     }
//     return 0;
// }
// int main(void)
// {
//     int cnt;
//     for(cnt=0;cnt<3; cnt++){
//         int num=0;
//         num++;
//         printf("%d번째 반복, 지역변수 num은 %d. \n", cnt+1, num);
//     }
//     if (cnt==3)
//     {
//         int num=7;
//         num++;
//         printf("if문 내에 존재하는 지역변수 num은 %d. \n",num);
//     }
//     return 0;
// }
// void SimpeFunc(void)
// {
//     static int num1=0;
//     int num2=0;
//     num1++, num2++;
//     printf("static: %d, local: %d \n", num1, num2);
// }
// int main(void)
// {
//     int i;
//     for(i=0; i<3; i++)
//         SimpeFunc();
//         return 0;
// }

// int Factorial(int n) //n!만들기
// {
//     if(n==0)
//         return 1;
//     else
//         return n* Factorial(n-1);
// }

// int main(void)
// {
//     printf("1! = %d \n", Factorial(1));
//     printf("2! = %d \n", Factorial(2));
//     printf("3! = %d \n", Factorial(3));
//     printf("4! = %d \n", Factorial(4));
//     return 0;
// }


//배열

// int main(void)
// {
//     int arr[5];
//     int sum=0, i;
//     arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

//     for(i=0;i<5;i++)
//         sum+=arr[i];
//         printf("배열 요소에 저장된 값의 합: %d\n",sum);
    
//     return 0;
// }

// int main()
// {
//     int arr[3];
//     arr[0]=1, arr[1]=2, arr[2]=3, //arr[3]=4;
//     printf("%d\n",arr[2]);
// }

//배열과 선언 동시에 하기
// int main()
// {
//     int arr1[5]={1,2,3,4,5};
//     int arr2[]={1,2,3,4,5,6,7};
//     int arr3[5]={1,2};
//     int ar1Len,ar2Len,ar3Len,i;

//     printf("배열 arr1의 크기: %d \n", sizeof(arr1));
//     printf("배열 arr2의 크기: %d \n", sizeof(arr2));
//     printf("배열 arr3의 크기: %d \n", sizeof(arr3));

//     ar1Len = sizeof(arr1) / sizeof(int);        //배역의 길이를 계산
//     ar2Len = sizeof(arr2) / sizeof(int);
//     ar3Len = sizeof(arr3) / sizeof(int);
//     for(i=0;i<ar2Len;i++)
//         printf("%d", arr1[i]);
//     printf("\n");
//     for ( i = 0; i < ar2Len; i++)
//         printf("%d", arr2[i]);
//     printf("\n");
//     for ( i = 0; i < ar3Len; i++)
//         printf("%d", arr3[i]);
//     printf("\n");
//     return 0;
// }


// int main()
// {
//     int n1,n2,n3,n4,n5,i;
//     int b1,b2,b3,b4,b5;
//     int c1,c2,c3,c4,c5;
//     printf("원하는 정수 5가지를 입력 : ");
//     scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);
//     int arr1[5]={};
//     arr1[0]+=n1;
//     arr1[1]+=n2;
//     arr1[2]+=n3;
//     arr1[3]+=n4;
//     arr1[4]+=n5;
//     // for(i=0;i<5;i++)
//     // {
//     if(arr1[0]>arr1[1] && arr1[0]>arr1[2] && arr1[0]>arr1[3] &&arr1[0]>arr1[4])
//     {
//         b1=arr1[0];
//         printf("입력된 정수 중 가장 최댓값은 %d\n", b1);

//     }
//     else if (arr1[1]>arr1[0] && arr1[1]>arr1[2] && arr1[1]>arr1[3] &&arr1[1]>arr1[4])
//     {
//         b2=arr1[1];
//         printf("입력된 정수 중 가장 값은 %d\n", b2);
//     }
    
// }
        
    
//     // printf("%d\n",arr1[1]);
// // }

// int main()
// {
//     char str[]="Good morning!";
//     printf("배열 str의 크기: %d \n",sizeof(str));
//     printf("널 문자 문자형 출력 : %c \n", str[13]);
//     printf("널 문자 정수형 출력: %d \n",str[13]);
//     printf("문자열 출력: %s \n", str);
//     str[12]='?';
//     printf("문자열 출력: %s \n", str);
//     return 0;
// }

// int main(void)
// {
//     char str[50];
//     int idx=0;

//     printf("문자열 입력: ");
//     scanf("%s",str);
//     printf("입력받은 문자열 ;%s \n",str);

//     printf("문자 단위 출력: ");
//     while(str[idx] !='\0')
//     {
//         printf("%c", str[idx]);
//         idx++;
//     }
//     printf("\n");
//     return 0;
// }


// //배열 중간에 \0문자 삽입
// int main()
// {
//     char str[50]="I like C programin";
//     printf("string: %s \n" ,str);
//     str[8]='\0';
//     printf("string: %s \n", str);
//     str[6]=0;
//     printf("string: %s \n",str);
//     str[1]='\0';
//     printf("string: %s \n",str);
//     return 0;
// }


// int main() //교재 p.268
// {
//     char str[100];
//     int i=0;
//     printf(" 원하는 문자열을 입력 : ");
//     scanf("%s", str);
//     while(str[i] != 0)
//     {
//         i++;
//     }
//     printf("%d",i);
//     printf("\n");
//     return 0;
// }
// int main(void)
// {
//     const unsigned int NUM1 = 3;
//     const unsigned int NUM2 = 5;
//     const unsigned int NUM3 = NUM1 & NUM2;
//     printf("%d\n",NUM3);
//     printf("%p", (void*)&NUM3);

//     return 0;
// }
// int main(void)
// {
//     int num=7;
//     int * pnum;
//     pnum = &num;
//     printf("%d",(int*)pnum);
// }

// int main(void)
// {
//     int num=10;
//     int * pnum = &num;
//     *pnum = 20;
//     printf("%d", &pnum);
// }

// int main(void)
// {
//     int num1 = 100, num2 = 100;
//     int * pnum;
//     pnum = &num1;
//     (*pnum)+=30;
//     pnum = &num2;
//     (*pnum)-=30;

//     printf("num1:%d, num2:%d \n", num1,num2);
//     return 0;
// }


// int main(void)
// {
//     int num1=10,num2=20;
//     int * ptr1;
//     int * ptr2;
//     ptr1 = &num1;
//     ptr2 = &num2;
//     printf("ptr1의 값:%d prt2의 값%d\n", *ptr1, ptr2);
//     *ptr1+=10;
//     *ptr2-=10;
//     printf("ptr1의 값:%d prt2의 값%d\n", *ptr1,*ptr2);
//     ptr1 = &num2;
//     ptr2 = &num1;
//     printf("ptr1의 값:%d prt2의 값%d\n", *ptr1, *ptr2);
// }

// int main(void)
// {
//     int num = 10;
//     int * ptr1 = &num;
//     int * ptr2 = ptr1;
//     (*ptr1)++;
//     (*ptr2)++;
//     printf("%d",num);

// }

// int main(void)
// {
//     int arr[3]={0,1,2};
//     printf("배열의 이름은 : %p \n",arr);
//     printf("첫 번째 요소 : %p \n",&arr[0]);
//     printf("두 번째 요소 : %p\n", &arr[1]);
//     printf("세 번째 요소 : %p \n", &arr[2]);
// }

// int main(void)
// {
//     int arr1[3]={1,2,3};
//     double arr2[3]={1.1,2.2,3.3};
//     printf("%d %g \n", *arr1, *arr2);
//     int * arr12 = &arr1[1];
//     *arr12 +=100;
//     *arr2 += 120.5;
//     printf("%d %g\n", arr1[1], arr2[2]);
//     return 0;
// }

// int main()
// {
//     int arr[3]={11,22,33};
//     int * ptr = arr;
//     printf(" %d %d %d\n",*ptr, *(ptr+1), *(ptr+2));

//     printf("%d ", *ptr);    
//     ptr++;
//     printf("%d ", *ptr);    
//     ptr++;
//     printf("%d ", *ptr);    
//     ptr--;
//     printf("%d ", *ptr);    
//     ptr--;
//     printf("%d ", *ptr);
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     char str1[]="My String";
//     char * str2 ="Your String";
//     printf("%s %s\n", str1, str2);

//     str2 ="Our String";
//     printf("%s %s \n", str1, str2);
//     str1[0]='x';
//     str2[0]='x';     //변환 안됨
//     printf("%s %s \n", str1, str2);
//     return 0;
// }

// int main(void)
// {
//     char * strArr[] = {"콜라", "우주맛 콜라", "array"};
//     int i;
//     for(i=0;i<3;i++)
//     {
//     printf("%s\n",strArr[i]);
//     }   
//     printf("%s\n",strArr[1]);
//     printf("%s\n",strArr[2]);


//     char menu[]={"colla"};
    // printf("%s", *strArr);
    // return 0;
// }


// void ShowArayElem(int* param, int len)
// {
//     int i;
//     for (i=0;i<len;i++)
//         printf("%d ", param[i]);
//     printf("\n");
// }
// void AddArayElem(int* param, int len, int add)
// {
//     int i;
//     for(i=0;i<len;i++)
//         param[i] += add;
// }
// int main(void)
// {
//     int arr1[3]={1, 2, 3};
//     int arr2[5]={4, 5, 6, 7, 8};
//     ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//     ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//     return 0;
// }

// void Swap(int* n1, int* n2)
// {
//     int temp=*n1;
//     *n1=*n2;
//     *n2=temp;
//     printf("n1 n2: %d %d \n", n1,n2);
// }
// int main(void)
// {
//     int num1=10;
//     int num2=20;
//     printf("num1, num2: %d %d\n",num1,num2);

//     Swap(&num1,&num2);
//     printf("num1, num2: %d %d \n",num1, num2);
//     return 0;
// }
//p.320
// int Square1(int num)
// {
//     int temp=0;
//     temp=num*num;
//     return temp;
// }
// int Square2(int*ptr)
// {
//     int num = *ptr;
//     *ptr = num*num;
// }
// int main(void)
// {
//     int num=0;
//     printf("원하는 정수를 입력 : \n");
//     scanf("%d", &num);
//     printf("%d\n",Square1(num));
//     Square2(&num);
//     printf("%d \n",num);
// }


// void Swap3(int *n1, int *n2, int *n3)
// {
//     int temp= *n3;
//     *n3=*n2;
//     *n2=*n1;
//     *n1=temp;

// }

// int main(void)
// {
//     int n1=0,n2=0,n3=0;
//     printf("원하는 정수 3개를 입력 : \n");
//     scanf("%d %d %d",&n1, &n2, &n3);
//     Swap3(&n1,&n2,&n3);
//     printf("%d %d %d",n1,n2,n3);
// }
