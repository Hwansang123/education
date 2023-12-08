#include <stdio.h>
int main(void)
{
    int num1,num2;
    int* p;
    int* q;
    int* r;
    int** pp;

    num1 = 10;             
    num2 = 20;             
    p = &num1;              
    q = &num2;              
    r = &num1;              

    pp = &p;               
    *pp = q;               
    **pp = 1024;           
    pp = &r;              
    **pp = *p * 2;          

    printf("%d %d",num1,num2);

}