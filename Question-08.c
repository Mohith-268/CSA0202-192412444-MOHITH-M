#include <stdio.h>

int main() {
    int experience, performance;

    printf("Experience: ");
    scanf("%d", &experience);

    printf("Performance: ");
    scanf("%d", &performance);

    if (experience < 3) {
        printf("Level: Junior");
    }
    else if (experience <= 7) {
        if (performance >= 80) {
            printf("Level: Mid-Level");
        } else {
            printf("Level: Junior");
        }
    }
    else {
        if (performance >= 85) {
            printf("Level: Senior");
        } else if (performance >= 80) {
            printf("Level: Mid-Level");
        } else {
            printf("Level: Junior");
        }
    }

    return 0;
}