#include<stdio.h>

int main(){
    int A;
    long int B;
    float C;
    char D;

    scanf("%d",&A);
    scanf("%ld",&B);
    scanf("%f",&C);
    scanf("%c",&D);

    printf("%d\n", A);
    printf("%ld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);

    return 0;
}

