#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(n%2==0)
    {
        int middle1=a[n/2-1];
        int middle2=a[(n/2)+1-1];
        printf("%d %d",middle1,middle2);
    }
    else
    {
        int middle=a[(n+1)/2-1];
        printf("%d",middle);
    }
    return 0;
}