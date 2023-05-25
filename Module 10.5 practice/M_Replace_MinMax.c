#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=INT_MAX,MIN_I;
    int max=INT_MIN,MAX_I;
    for(int i=0;i<n;i++)
    {
        if(a[i] < min)
        {
            min=a[i];
            MIN_I=i;
        }
        else if(a[i] > max)
        {
            max=a[i];
            MAX_I=i;
        }
    }
    int temp=a[MIN_I];
    a[MIN_I]=a[MAX_I];
    a[MAX_I]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}