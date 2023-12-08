#include<stdio.h>
void Draw (int n)
{

    for(int i=1;i<=n;i++)
    {
       for(int j=0;j<n-i;j++)
       {
        printf(" ");
       }
       for(int k=0;k<2*i-1;k++)
       {
        printf("*");
       }
       printf("\n");
    }
}

int main(void)
{
    int n=0;
    printf("원하는 정수를 입력 : ");
    scanf("%d",&n);
    Draw(n);
    

}