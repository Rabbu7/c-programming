#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,count=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}