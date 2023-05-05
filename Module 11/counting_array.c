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
    //int z=0,o=0,t=0;
    int cnt[7]={0};
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        cnt[i]++;
        
        // if(a[i]==0)
        // {
        //     z++;
        // }
        // if(a[i]==1)
        // {
        //     o++;
        // }
        // if(a[i]==2)
        // {
        //     t++;
        // }
    }
    // printf("0 - %d\n1 - %d\n2 - %d",z,o,t);
    for(int i=0;i<=6;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}