#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,p=-1;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            p=i;
            break;    
        }
    }
    printf("ar[%d]",p);
    return 0;
}