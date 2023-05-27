#include<stdio.h>
int main()
{
    float d,p;
    scanf("%f %f",&d,&p);
    float mp;
    mp=p/(1-(d/100));
    printf("%0.2f",mp);
    return 0;
}