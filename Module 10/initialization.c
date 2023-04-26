#include<stdio.h>
int main()
{
    char a[5]="Rabbu";
    for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    
    // for loop chara print korte chaile:
    char a[6]="Rabbu\0";
    printf("%s",a);

    // size of array:
    char a[]="Rabbu";                       //size na dile \0 dewa lagbe na
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);

    return 0;
}