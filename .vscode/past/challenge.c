#include<stdio.h>

// int main() //경우의 수 구하기
// {
//     int a=500, b=700, c=400;
//     int total=3500;
//     int i, j, k;
//     // int a1=a*i;
//     // int b1=b*j;
//     // int c1=c*k;
//     for(i=1;i<7;i++)
//     {
//         for(j=1;j<5;j++)
//         {
//             for(k=1;k<9;k++)
//             {
//                 if(a*i+b*j+c*k==total){
//                     printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 구입가능\n",i,j,k);
//                 }
//             }
//         }
//     }
    
//     return 0;
// }

// int main() //소수구하기
// {
//     unsigned int i, j,k=0;
//     for(i=2;i<25;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i % j == 0)
//             {    k++
//                 printf("%d", j);  
//             }
//         } 
//     }
// }

// int main()      //문제 8/입력한 수로 시간 보여주기
// {
//     int second;
//     int s=0,m=0,h=0;
//     printf("원하는 수를 적으시오.: ");
//     scanf("%d", &second);
    
//     h = second/3600;
//     m = (second-3600*h)/60;
//     s = second%60;
//     printf("%d초는 %d시 %d분 %d 초 이다.", second, h, m, s);
//     return 0;    

// }