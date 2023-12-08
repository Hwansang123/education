#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    srand(time(NULL));
    int rand1[9];
    int i=0;
    int max=0;
    for(;i<10;i++)
    {
    rand1[i] = rand()%100+1;
    printf("%d\n",rand1[i]);
    }
    max=rand1[0];
    for(i=0;i<10;i++)
    {
        if(max<rand1[i])
        {
            max=rand1[i];
        }
    }
    printf("최대값:%d",max);
    return 0;
}