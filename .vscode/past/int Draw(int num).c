int Draw(int num)
{
    int space = num - 1;
    for(int i = 0; i < num; i++)
    {
        int star = i*2+1;
        int drawstar = 0;
        int drawspace = 0;
        while(drawspace < space)
        {
            printf(" ");
            drawspace++;
        }
        while(drawstar < star)
        {
            printf("");
            drawstar++;
        }
        space--;
        printf("\n");
    }
}