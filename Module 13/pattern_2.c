#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    // int s=n-1,k=1;
    int s=0,k=(2*n)-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=1;j--)
        // for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=k;j>=1;j--)
        // for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        // s--;
        s++;
        // k=k+2;
        k=k-2;
        printf("\n");

    }
    return 0;
}