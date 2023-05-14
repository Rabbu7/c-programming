#include<stdio.h>
int main()
{
    int x=100;
    int *ptr=&x;
    x=200;
    printf("x er value - %d",x);
    return 0;
}