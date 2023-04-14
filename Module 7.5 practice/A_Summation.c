#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    if(sum>=0)
    {
        printf("%d",sum);
    }
    else
    {
        sum=-(sum);
        printf("%d",sum);
    }
    return 0;
}