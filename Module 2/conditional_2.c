#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("burger khabo");
    }
    else if(tk >= 50)
    {
        printf("fuchka khabo");
    }
    else
    {
        printf("khabo na");
    }
    return 0;
}