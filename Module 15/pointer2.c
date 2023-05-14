#include<stdio.h>
int main()
{
    double x=15.67;
    double *ptr=&x;
    *ptr=34.56;
    printf("%0.2lf",x);
    return 0;
}