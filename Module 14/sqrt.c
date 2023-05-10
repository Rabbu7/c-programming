#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    double ans=pow(x,y);
    printf("%0.2lf",ans);
    return 0;
}