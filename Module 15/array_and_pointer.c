#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    printf("1st index - %d",*(ar+1));
    printf("1st index - %d",*(1+ar));
    printf("1st index - %d",ar[1]);
    printf("1st index - %d",1[ar]);
    return 0;
}