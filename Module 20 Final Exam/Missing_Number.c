#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int s,a,b,c;
        scanf("%d %d %d %d",&s,&a,&b,&c);
        int m;
        m=s-(a+b+c);
        printf("%d\n",m);
    }
    return 0;
}