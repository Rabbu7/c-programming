#include<stdio.h>
#include<limits.h>
void fun(int ar[],int n,int *min,int *max)
{
    *min=ar[0];
    *max=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]<*min)
        {
            *min=ar[i];
        }
        if(ar[i]>*max)
        {
            *max=ar[i];
        }
    }
}
int main()
{
    int n,min,max;
    scanf("%d",&n);
    int ar[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    fun(ar,n,&min,&max);
    printf("%d %d",min,max);
    return 0;
}