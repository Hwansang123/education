#include<stdio.h>
// //Q.1
// int main()
// {
//     int a, b;

//     printf(" 두개의 정수를 입력하세요. : ");
//     scanf("%d %d", &a, &b);
//     if (a>b){
//         printf("%d\n", a);
//     }
//     else if (a<b){
//         printf("%d\n",b);
//     }
//     return 0;
// }


// //Q.2
// int main()
// {
//     int a;
//     printf("하나의 정수를 입력해주세요. : ");
//     scanf("%d",&a);
//     if(a==0)
//     {
//         printf("0\n");
//     }
//     else if (a>0)
//     {
//         printf("양수\n");
//     }
//     else if (a<0)
//     {
//         printf("음수\n");
//     }
//     return 0;
// }

// //Q.3
// int main()
// {
//     int max, a1,a2,a3;
//     printf("정수를 입력해주세요. : ");
//     scanf("%d", &a1);
//     max = a1;
//     printf("Max는 %d\n",max);
//     printf("정수를 입력해주세요. : ");
//     scanf("%d", &a2);
//         if (a2>max){
//             max=a2;
//             printf("Max는 %d\n",max);
//         }
        
//         else{
//             max=a1;
//             printf("Max는 %d\n",max);
//         }
                
//     printf("정수를 입력해주세요. : ");
//     scanf("%d", &a3);
//         if(a3>max){
//             max=a3;
//             printf("Max는 %d\n", max);
//         }
//         else{
//             printf("Max는 %d\n", max);
//         }
// }


// //Q.4
// int main()
// {
//     int num;
//     printf("정수를 입력 : ");
//     scanf("%d", &num);
//     if(num%2==0){
//         printf(" 입력한 정수 %d는 짝수\n",num);
//     }
//     else if (num%2!=0)
//     {
//         printf("입력한 정수 %d는 홀수\n", num);
//     }
//     return 0;
// }



// //Q.5
// int main()
// {
//     int num;
//     printf("정수를 입력 : ");
//     scanf("%d", &num);
//     if(num%3==0){
//         printf(" 입력한 정수 %d는 3의 배수이다. \n",num);
//     }
//     else if (num%3!=0)
//     {
//         printf("입력한 정수 %d는 3의 배수가 아니다\n", num);
//     }
//     return 0;
// }

// //Q.6
// int main()
// {
//     int age,price;
//     printf("구매자의 연령을 적어주세요. : ");
//     scanf("%d", &age);
//     if(age<8){
//         price = 0;
//         printf("구매자의 연령이 %d살 미만이므로 입장료는 %d원 입니다.\n", age, price);
//     }
//     else if (8<=age&&age<60){
//         price = 5000;
//         printf("구매자의 연령이 %d살이므로 입장료는 %d원 입니다.\n", age, price);
//     }
//     else if (age>=60){
//         price = 2500;
//         printf("구매자의 연령이 %d살이므로 입장료는 %d원 입니다.\n", age, price);
//     }
//     return 0;  
// }


// //Q.7
// int main()
// {
//     int num;
//     printf("정수를 입력 : ");
//     scanf("%d", &num);
//     if(num%3==0 && num%5==0){
//         printf(" 입력한 정수 %d는 3의 배수이면서 5의 배수다\n",num);
//     }
//     else if (num%3==0 || num%5!=0)
//     {
//         printf("입력한 정수 %d는 3의 배수는 맞지만 5의 배수는 아니다\n", num);
//     }
//     else if (num%5==0 || num%3!=0)
//     {
//         printf("입력한 정수 %d는 5의 배수는 맞지만 3의 배수는 아니다\n", num);
//     }
//     return 0;
// }

// //Q.8
// int main()
// {
//     int age, price=5000;
//     printf("구매자의 연령을 입력해주세요. : ");
//     scanf("%d", &age);
//     if(8<=age && age<60){
//         printf("입장료 %d원 입니다.", price);
//     }
//     else{
//         printf("입장료가 무료입니다");
//     }
// }