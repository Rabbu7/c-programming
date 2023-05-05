#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
        printf("same\n");
        break;
        }

        else if(a[i]=='\0')
        {
        printf("a choto\n");
        break;
        }

        else if(b[i]=='\0')
        {
        printf("b choto");
        break;
        }

        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i] < b[i])
        {
            printf("b chuto\n");
            break;
        }
        else
        {
            printf("a chuto\n");
            break;
        }
    }

    return 0;
}