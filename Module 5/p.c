#include<stdio.h>
int main()
{
    int X,fv;
    scanf("%d",&X);
    fv=X/1000;
    if(fv%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}