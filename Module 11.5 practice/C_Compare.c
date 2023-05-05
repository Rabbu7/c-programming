#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    scanf("%s %s",a,b);
    int val=strcmp(a,b);
    if(val>0)
    {
        printf("%s",b);
    }
    else if(val<0)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",a);
    }
    return 0;
}