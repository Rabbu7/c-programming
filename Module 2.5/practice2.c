#include<stdio.h>
int main()
{
    int a,b;
    int sum,sub,mult;
    float div;
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("%d + %d= %d\n",a,b,sum);

    sub=a-b;
    printf("%d - %d= %d\n",a,b,sub);

    mult=a*b;
    printf("%d * %d= %d\n",a,b,mult);

    div=a*1.0/b;
    printf("%d / %d= %0.2f",a,b,div);

    return 0;
}