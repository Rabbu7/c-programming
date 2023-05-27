#include<stdio.h>
#include<limits.h>
void fun(int n,int a[])
{
    int min=INT_MAX;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            count=1;
        }
        else if(a[i]==min)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(n,a);
    
    return 0;
}