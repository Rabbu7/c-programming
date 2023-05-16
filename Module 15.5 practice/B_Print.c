#include<stdio.h>
void fun(int *ar,int x)
{
    for(int i=1;i<=x;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    fun(ar,n);
    return 0;
}