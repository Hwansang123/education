#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Sort()
{
    
}


int main(void)
{
    srand(time(NULL));
    int str[10];
    for(int i=0;i<10;i++)
    {
        str[i]=rand()%100+1;
        printf("%d\n", str[i]);
    }
    
}