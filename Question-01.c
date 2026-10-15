#include <stdio.h>

int main() {
    int finalFare, baseFare = 100, extra = 20, distance;
    int memberShip;

    printf("Enter distance: ");
    scanf("%d", &distance);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &memberShip);

    if (distance < 0 || (memberShip != 0 && memberShip != 1)) {
        printf("Invalid input");
    }
    else if (distance <= 10) {
        finalFare = baseFare;
    }
    else {
        finalFare = baseFare + (distance - 10) * extra;
    }

    if (distance >= 0 && (memberShip == 0 || memberShip == 1)) {
        if (memberShip == 1) {
            finalFare = finalFare - finalFare * 10 / 100;
        }

        printf("Final fare = Rs.%d\n", finalFare);
    }

    return 0;
}
