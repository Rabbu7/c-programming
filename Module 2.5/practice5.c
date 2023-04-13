#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=10000)
    {
        printf("will buy Gucci Bag\n");
        if(a>=20000)
        {
            printf("and Gucci Belt");
        }
        else
        {
            printf("nothing more");
        }
    }
    else if(a>=5000)
    {
        printf("will buy Levis Bag");
    }
    else
    {
        printf("will buy something from new market");
    }
    return 0;
}