#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d ",i);
        if(i%5==0)
        {
            printf("Yes\n",i);
        }
        else
        {
            printf("No\n",i);
        }
    }
    

    return 0;
}