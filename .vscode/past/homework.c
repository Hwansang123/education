#include <stdio.h>

int main(void)
{
    // int num1;
    // int num2;
    int num1=0;
    int num2=10;
    int result1 = num1++ + num2;
    int result2 = ++num1 + num2++;
    int result3 = num1-- + num1-- - --num2;
    int result4 = num2++ * (num1++)- (--num2) + num1;

    printf("%d", result1);
    printf("%d", result2);
    printf("%d", result3);
    printf("%d", result4);
    return 0;
}