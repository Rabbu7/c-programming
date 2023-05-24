// #include<stdio.h>
// void fun(int x)
// {
//     x=x+20;
//     printf("adding value - %d",x);
// }
// int main()
// {
//     int x=10;
//     fun(x);
//     printf("main value - %d",x);
//     return 0;
// }

#include<stdio.h>
void fun(int *x)
{
    *x=*x+20;
    printf("adding value - %d",*x);
}
int main()
{
    int x=10;
    fun(&x);
    printf("main value - %d",x);
    return 0;
}