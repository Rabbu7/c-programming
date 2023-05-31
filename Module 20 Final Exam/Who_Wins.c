#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int T_w=0,P_w=0;
    for(int i=1;i<=n;i++)
    {
        int T,P;
        scanf("%d %d",&T,&P);
        
        if(T>P)
        {
            T_w++;
        }
        else if(P>T)
        {
            P_w++;
        }
    }
    if(T_w>P_w)
    {
        printf("Tiger");
    }
    else if(P_w>T_w)
    {
        printf("Pathan");
    }
    else if(T_w==P_w)
    {
        printf("Draw");
    }
    
    return 0;
}