#include<stdio.h>

int power (int m, int n)
{
    int temp=1,i,j=0,k=1;
    if(m>0 && n>0)
    {
        for(i=0;i<n;i++)
        {
            temp*=m;
            
        }
        
    }
    else if (m==0 || n==0)
    {
        temp==1;
    }
    

    else if (m<0)
    {
        j= -(m);
        for(i=0;i<n;i++)
        {
            k*=j;
            temp= -(k);
        }

    }
    
    return temp;
}

int main(void)
{
    int result;
    int m,n;
    printf("원하는 정수를 입력하세요. : "); scanf("%d",&m);
    printf("제곱할 수를 입력하세요. : "); scanf("%d",&n);
    // power(m,n);
    result = power(m,n);
    printf("%d의 %d승의 값은 %d이다.", m,n,result);
    return 0;
}