#include <stdio.h>

int main(){
    int dollar1,cents1,dollar2,cents2,sum1=0,sum2=0;

    printf("dollar1: ");
    scanf("%d", &dollar1);

    printf("cents1: ");
    scanf("%d", &cents1);

    printf("dollar2: ");
    scanf("%d", &dollar2);

    printf("cents2: ");
    scanf("%d", &cents2);

    sum1 = dollar1+dollar2;
    sum2 = cents1+cents2;
    sum1 = sum1+sum2/100;
    sum2 = sum2%100;
    printf("Dollar: %d\nCents: %d",sum1, sum2);
    return 0;
}