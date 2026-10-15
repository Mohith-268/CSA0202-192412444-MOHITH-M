#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;

    scanf("%f%d%d", &mileage, &petrol, &distance);

    if (mileage * petrol >= distance) {
        printf("Can reach");
    } else {
        printf("Cannot reach");
    }

    return 0;
}
