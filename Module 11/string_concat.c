#include<stdio.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int k=strlen(a);
    for(int i=0;i<strlen(b);i++)
    // for(int i=0;i<2;i++)                    // jodi full sentence copy korte na chai
    {
        a[k]=b[i];
        k++;
    }
    // a[k]='\0';
    printf("%s %s",a,b);
    return 0;
}