#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int fishtank=1; 
    int turn=0, parentsfish=1,birthfish=0, deathfish=0;     
    srand(time(0));
    while(fishtank<500)
    {
    birthfish =((rand() % 5)+1);
    fishtank=parentsfish+birthfish;
    parentsfish+=birthfish;
    
        turn+=1;
       
    if(turn>=2)
    {
        deathfish=(rand()%3+2);
        parentsfish-=parentsfish*deathfish*0.1;
    }
        printf("%d턴일때 %d마리이다.\n",turn,fishtank);
    }
    return 0;
}