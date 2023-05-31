#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int c_count=0,s_count=0,sp_count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c_count++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s_count++;
        }
        else if(s[i]==' ')
        {
            sp_count++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",c_count,s_count,sp_count);
    return 0;
}