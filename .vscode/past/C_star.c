#include<stdio.h>
// //Q.1
// int main()
// {
//     int i,j;
//     for(i=0;i<6;i++){   //i가 조건식 6미만을 만족할때까지 밑의 식을 반복
//         for(j=0 ;j<6-i;j++){    //j가 조건식 (6-i)미만을 만족할때까지 '*'출력(i=0일때j는5까지 가능하기에 '*'을 5개 찍음)
//             printf("*");
//         }   
//     printf("\n");       //위의 j의 조건식을 만족하는 '*'의수만큼 찍은 후 줄변경을 위한 코드
//     }
// }

// //Q,2
int main()
{
    int i,j,k,n;
    printf("정수입력 : ");
    scanf("%d",&n);
    for(i=0;i<n;i+=2){
        for(j=0;j<n-i;j+=1){
            printf(" ");
        }
        for(k=0;k<=i;k+=1){
            printf("*");
        }
        printf("\n");
    }
}



// //Q,3
// int main()
// {
//     int i,j,k;

//     for(i=0;i<11;i+=2){  
//         for(j=0 ;j<(11-i);j+=2){
//             printf(" ");
//     }
//         for(k=0;k<=i;k++) {
//                 printf("*");
//         }
//         printf("\n");
//     } 
//     for(i=0;i<11;i+=2){  
//         for(k=0;k<=i;k+=2){
//             printf(" ");
//     }
//         for(j=0 ;j<(11-i);j+=1){
//                 printf("*");
//         }
//         printf("\n");
//     } 
// }


// // //Q.4
// int main()
// {
//     int i,j,k;

//     for(i=0;i<11;i+=2){  
//         for(k=0;k<=i;k+=2){
//             printf(" ");
//     }
//         for(j=0 ;j<(11-i);j+=1){
//                 printf("*");
//         }
//         printf("\n");
//     } 
//     for(i=2;i<11;i+=2){
//         for(j=0;j<11-i;j+=2){
//             printf(" ");
//         }
//         for(k=0;k<=i;k+=1){
//             printf("*");
//         }
//         printf("\n");
//     }

// }

