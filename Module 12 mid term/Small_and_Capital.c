#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int capital_c=0,small_c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            small_c++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            capital_c++;
        }
    }
    printf("%d %d",capital_c,small_c);
    return 0;
}