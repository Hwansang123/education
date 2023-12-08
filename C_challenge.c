 #include <stdio.h>

typedef struct 
{
    char Name[30];
    char BName[30];
    int Page;
}library;

int main(void)
{
    library book[3];
    int i;
    printf("책의 정보를 입력하세요.\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("저자: "); 
        scanf("%s", book[i].Name);
        printf("책 제목: ");
        scanf("%s", book[i].BName);
        printf("책의 페이지 수: ");
        scanf("%d", &book[i].Page);
    }
    printf("입력한 책의 정보\n");
    for ( i = 0; i < 3; i++)
    {
        printf("책의 저자: %s\n",book[i].Name);
        printf("책의 제목: %s\n",book[i].BName);
        printf("책의 페이지 수: %d\n",book[i].Page);
    }
}