#include <stdio.h>
int main(void)
{
    int arr[3]={11, 22, 33};
    int * ptr = arr;                        //int * ptr = &arr[0];
    *(++ptr)=20;
    // *(ptr+1)=20;
    printf("%d %d %d \n",*ptr, *(ptr+1), *(ptr+2));

    // printf("%d ", *ptr); ptr++;             //출력값 11 출력 후 ptr++를 실행
    // printf("%d ", *ptr); ptr++;             //출력값 22
    // printf("%d ", *ptr); ptr--;             //출력값 33 출력 후 ptr--를 실행
    // printf("%d ", *ptr); ptr--;             //출력값 22
    // printf("%d ", *ptr); ptr--;             //출력값 11
}