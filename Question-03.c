#include <stdio.h>

int main() {
    int treasure, x, y;
    int longBen,remaining,blackbeard,pirateShare;

    printf("treasure:");
    scanf("%d", &treasure);

    printf("X:");
    scanf("%d", &x);

    printf("Y:");
    scanf("%d", &y);
    

    longBen = treasure * x / 100;
    remaining = treasure - longBen;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirateShare = remaining / 3;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", pirateShare);

    return 0;
}