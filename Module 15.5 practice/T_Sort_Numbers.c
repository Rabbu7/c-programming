#include<stdio.h>
void fun(int x,int y,int z)
{
    if(x<y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    if(y<z)
    {
        int temp=y;
        y=z;
        z=temp;
    }
    if(z<x)
    {
        int temp=z;
        z=x;
        x=temp;
    }
    printf("%d\n%d\n%d\n\n",x,y,z);
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    fun(a,b,c);
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}