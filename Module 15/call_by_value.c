#include<stdio.h>
void fun(int x)
{
    x=200;
}
int main()
{
    int x=10;
    fun(x);
    printf("main x er value - %d",x);
    return 0;
}