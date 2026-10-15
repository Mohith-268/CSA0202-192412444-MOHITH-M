#include <stdio.h>

int main() {
    int n, binary = 0, rem, place = 1;

    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        n = n / 2;
        place = place * 10;
    }

    printf("%d", binary);

    return 0;
}
