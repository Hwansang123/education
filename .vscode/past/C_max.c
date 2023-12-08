#include<stdio.h>

double MAX(double num1, double num2, double num3, double num4, double num5)
{
    double max=0;
    max=num1;
    int i;
    for(i=1;i<6;i++)
    {
    if(max<num2)    
        max=num2;
        
    else if (max<num3)
        max=num3;
    else if (max<num4)
        max=num4;
    else if (max<num5)
        max=num5;
    }
    return max;
}
double MIN(double num1, double num2, double num3, double num4, double num5)
{
    double min=0;
    min=num1;
    int i;
    for(i=1;i<6;i++)
    {
    if (min>num2)
        min=num2;
    else if (min>num3)
        min=num3;
    else if (min>num4)
        min=num4;
    else if (min>num5)
        min=num5;
    }
    return min;
}
int main(void)
{
    double result1, result2;
    double n1,n2,n3,n4,n5;
    printf("원하는 변수를 입력하시오. : \n");
    scanf("%lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5);
    result1=MAX(n1, n2, n3, n4, n5);
    result2=MIN(n1, n2, n3, n4, n5);
    printf("입력한 변수 %f %f %f %f %f 중 최대값은 %lf, 최소값은 %lf이다.",n1,n2,n3,n4,n5,result1,result2);
    
}