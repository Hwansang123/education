#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// int main(void)
// {
//     int ch1, ch2;
//     ch1=getchar();
//     ch2=fgetc(stdin);

//     putchar(ch1);
//     fputc(ch2, stdout);
//     return 0;
// }

// int main(void)
// {
//     int ch;
//     while (1)
//     {
//         ch = getchar();
//         if(ch==EOF)
//             break;
//         putchar(ch);
//     }
//     return 0;    
// }

// int main(void)
// {
//     char str[7];
//     int i;
//     for(i=0 ; i<3 ; i++)
//     {
//         fgets(str, sizeof(str), stdin);
//         printf("Read %d: %s \n", i+1, str);
//     }
//     return 0;
// }

// void ClearLineFromReadBuffer(void)
// {
//     while (getchar()!='\n');
// }

// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력 : ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     ClearLineFromReadBuffer();

//     fputs("이름 입력: ", stdout);
//     fgets(name, sizeof(name), stdin);

//     printf("주민번호: %s\n", perID);
//     printf("이름: %s\n",name);
//     return 0;
// }

// void RemoveBSN(char str[])
// {
//     int len =strlen(str);
//     str[len-1]=0;
// }
// int main(void)
// {
//     char str[100];
//     printf("문자열 입력: ");
//     fgets(str, sizeof(str), stdin);
//     printf("길이: %d, 내용: %s \n",strlen(str), str);

//     RemoveBSN(str);
//     printf("길이: %d, 내용: %s \n", strlen(str), str);
//     return 0;
// }

// int main(void)
// {
//     char str1[20]="1234567890";
//     char str2[20];
//     char str3[5];

//     strcpy(str2, str1);
//     puts(str2);

//     strncpy(str3,str1, sizeof(str3));
//     puts(str3);

//     strncpy(str3, str1, sizeof(str3)-1);
//     str3[sizeof(str3)-1]=0;
//     puts(str3);
//     return 0;

// }

// int main(void)
// {
//     char str1[20]="First~";
//     char str2[20]="Second";
    
//     char str3[20]="Simple num: ";
//     char str4[20]="1234567890";

//     strcat(str1, str2);
//     puts(str1);

//     strncat(str3, str4, 7);
//     puts(str3);
//     return 0;
// }

// int main(void)
// {
//     char str1[20];
//     char str2[20];
//     printf("문자열 입력1 : " );
//     scanf("%s", str1);
//     printf("문자열 입력2 : ");
//     scanf("%s", str2);

//     if(!strcmp(str1,str2))
//     {
//         puts("두 문자열은 동일합니다.");
//     }
//     else 
//     {
//         puts("두 문자열은 동일하지 않습니다.");

//         if(!strncmp(str1, str2, 3))
//             puts("그러나 앞 세 글자는 동일합니다.");
//     }
//     return 0;
// }

// struct  point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1, pos2;
//     double distance;

//     fputs("point1 pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);
//     fputs("point2 pos : ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     distance = sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));
//     printf("두 점의 거리는 %lf 입니다.\n", distance);
//     return 0;
    
// }
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person man1, man2;
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age = 23;
    
//     printf("이름 입력: "); scanf("%s", man2.name);
//     printf("번호 입력: "); scanf("%s", man2.phoneNum);
//     printf("나이 입력: "); scanf("%d", &(man2.age));

//     printf("이름: %s \n", man1.name);
//     printf("번호: %s \n", man1.phoneNum);
//     printf("나이: %d \n", man1.age);

//     printf("이름: %s \n", man2.name);
//     printf("번호: %s \n", man2.phoneNum);
//     printf("나이: %d \n", man2.age);
//     return 0;
// }

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person arr[3]={
//         {"이승기", "010-1212-0001", 21},
//         {"정지영", "010-1313-0002", 22},
//         {"한지수", "010-1717-0003", 19}
//     };
//     int i;
//     for(i=0 ; i<3 ; i++)
//         printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//     return 0;
// }


// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1={1, 2};
//     struct point pos2={100, 200};
//     struct point *pptr=&pos1;

//     (*pptr).xpos +=4;
//     (*pptr).ypos +=5;
//     printf("[%d, %d]\n",(*pptr).xpos, (*pptr).ypos);

//     pptr=&pos2;
//     pptr->xpos += 1;
//     pptr->ypos +=2;
//     printf("[%d %d]\n", pptr->xpos, pptr->ypos);
//     return 0;    
// }



// struct point
// {
//     int xpos;
//     int ypos;
// };
// struct circle
// {
//     double radius;
//     struct point * center;
// };

// int main(void)
// {
//     struct point cen={2, 7};
//     double rad = 5.5;

//     struct circle ring= {rad, &cen};
//     printf("원의 반지름: %g \n", ring.radius);
//     printf("원의 중심 [%d, %d]\n",(ring.center)->xpos, (ring.center)->ypos);
//     return 0;

// }

// struct point
// {
//     int xpos;
//     int ypos;
//     struct point *ptr;
// };

// int main(void)
// {
//     struct point pos1={1, 1};
//     struct point pos2={2, 2};
//     struct point pos3={3, 3};
    
//     pos1.ptr = &pos2;
//     pos2.ptr = &pos3;
//     pos3.ptr = &pos1;

//     printf("점의 연결관계..\n");
//     printf("[%d, %d]와 [%d, %d] 연결\n", pos1.xpos, pos2.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
//     printf("[%d, %d]와 [%d, %d] 연결\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
//     printf("[%d, %d]와 [%d, %d] 연결\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
//     return 0;
// }


// struct point
// {
//     int xpos;
//     int ypos;
// };
// typedef struct point Point;

// typedef struct 
// {
//     char name[20];
//     char pjoneNum[20];
//     int age;
// } Person;

// int main(void)
// {
//     Point pos={10, 20};
//     Person man={"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d\n",man.name, man.pjoneNum, man.age);
//     return 0;
// }



// typedef struct point
// {
//     int xpos;
//     int ypos;

// } Point;

// void ShowPosition(Point pos)
// {
//     printf("[%d, %d]\n",pos.xpos, pos.ypos);
// }

// Point GetCerrentPosition(void)
// {
//     Point cen;
//     printf("Inpu crrent pos: ");
//     scanf("%d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }

// int main(void)
// {
//     Point curPos= GetCerrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }

// typedef struct point
// {
//     int xpos;
//     int ypos;

// } Point;

// Point AddPoint(Point pos1, Point pos2)
// {
//     Point pos ={pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
//     return pos;
// }


// Point MinPoint(Point pos1, Point pos2)
// {
//     Point pos = {pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos};
//     return pos;
// }

// int main(void)
// {
//     Point pos1 ={5, 6};
//     Point pos2 ={2, 9};
//     Point result;

//     result=AddPoint(pos1, pos2);
//     printf("[%d, %d]\n", result.xpos, result.ypos);
//     result=MinPoint(pos1, pos2);
//     printf("[%d, %d]\n",result.xpos, result.ypos);
//     return 0;
// }



// typedef enum 
// {
//     Do=1, Re=2, Mi=3, Fa=4, Sol=5, La=6,Ti=7
// }Syllabe;

// void Sound(Syllabe sy)
// {
//     switch (sy)
//     {
//     case Do:
//         puts("도는 하얀 도라지"); return;
//     case Re:
//         puts("레는 둥근 레코드"); return;
//     case Mi:
//         puts("미는 파란 미나리"); return;
//     case Fa:
//         puts("파는 예쁜 파랑새"); return;
//     case Sol:
//         puts("솔은 작은 솔방울"); return;
//     case La:
//         puts("라는 리디오고요"); return;
//     case Ti:
//         puts("시는 졸졸 시냇물"); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도 짠~");
// }

// int main(void)
// {
//     Syllabe tone;
//     for (tone=0; tone<= Ti; tone+=1)
//         Sound(tone);
//     return 0;
// }


// int main(void)
// {
//     FILE * fp=fopen("data.txt", "wt");
//     if(fp==NULL){
//         puts("파일 오픈 실패!");
//         return -1;
//     }
//     fputc('1',fp);
//     fputc('2',fp);
//     fputc('3',fp);
//     fclose(fp);
//     return 0;
// }


// int main(void)
// {
//     int ch, i;
//     FILE * fp=fopen("data.txt","rt");
//     if(fp==NULL){
//         puts("파일 오픈 실패!");
//         return -1;
//     }
//     for(i=0 ; i<3 ; i++)
//     {
//         ch=fgetc(fp);
//         printf("%c \n",ch);
//     }
//     fclose(fp);
//     return 0;
// }


/*int main(void)
{
    char line[100];
    FILE * rip= fopen("rip","r");
    fopen("rip", "r");
    while (fgets, sizeof(line),)
    {
    }
    
    rip = fopen("rip","r");
        while(fgets(line,sizeof(line),rip)!=NULL){
            printf("%s", line);
        }

}*/

// int main(void)
// {
//     int * ptr1 = (int *)malloc(sizeof(int));
//     int * ptr2 = (int *)malloc(sizeof(int)*7);
//     int i;
    
//     *ptr1 = 20;
//     for (i=0 ; i<7 ; i++)
//         ptr2[i] = i+1;
    
//     printf("%d \n", *ptr1);
//     for(i=0 ; i<7 ; i++)
//         printf("%d ", ptr2[i]);

//     free(ptr1);
//     free(ptr2);
//     return 0;
// }


// char * ReadUserName(void)
// {
//     char * name = (char *)malloc(sizeof(char)*30);
//     printf("What's your name? ");
//     gets(name);
//     return name;
// }
// int main(void)
// {
//     char * name1;
//     char * name2;
//     name1 = ReadUserName();
//     printf("name1: %s \n", name1);
//     name2 = ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("again name1: %s\n", name1);
//     printf("again name2: %s\n", name2);
//     free(name1);
//     free(name2);
//     return 0;
// }

// void func2(int n)
// {
//     int num3=n+1;
// }

// void func1(int n)
// {
//     int num2=n+1;
//     func2(num2);
// }

// int main(void)
// {
//     int num1=20;
//     func1(num1);
//     return 0;
// }



// int main(void)
// {
//     char * arr = (char*)malloc(sizeof(char)*100);
//     printf("원하는 문구를 적어주세요: \n");
//     gets(arr);
//     int len = sizeof(arr);
//     for(int i=len ; i>=0 ; i--)
//         // printf("%c",arr[i]);
//         if(arr[i]==' ')
//         {
//             printf("%s ", &arr[i+1]);
//             arr[i]=0;
//         }
//     printf("%s", &arr[0]);
//     free(arr);
// }


