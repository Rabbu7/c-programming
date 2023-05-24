//No Return + No Parameter :
#include<stdio.h>
void mult(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int m=a*b;
    printf("%d",m);
}
int main()
{
    mult();
    return 0;
}


// No Return + Parameter :
#include<stdio.h>
void fun(int ar[],int n,int *min,int *max)
{
    *min=ar[0];
    *max=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]<*min){
            *min=ar[i];
        }
        if(ar[i]>*max){
            *max=ar[i];
        }
    }
}
int main()
{
    int n,min,max;
    scanf("%d",&n);
    int ar[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    fun(ar,n,&min,&max);
    printf("%d %d",min,max);
    return 0;
}


// Return + No Parameter :
#include<stdio.h>
int sub(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a-b;
    return s;
}
int main()
{
    int s=sub();
    printf("%d",s);
    
    return 0;
}


// Return + Parameter :
#include<stdio.h>
int count_before_zero(int *ar,int n)
{
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int count = count_before_zero(ar,n);
    printf("%d",count);
    return 0;
}