#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int even_c=0,odd_c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_c++;
        }
        else
        {
            odd_c++;
        }
    }
    printf("%d %d",even_c,odd_c);
    return 0;
}