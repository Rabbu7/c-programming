#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>1000)
    {
        printf("I will buy Punjabi\n");
        if(N<=500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
        else
        {
            printf("Both of us won't shoes");
        }

    }
    else
    {
        printf("Bad luck");
    }
    return 0;
}