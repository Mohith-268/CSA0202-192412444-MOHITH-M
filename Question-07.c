#include <stdio.h>

int main() {
    int principal, rate, years;
    float interest, amount, discount, finalAmount;

    scanf("%d%d%d", &principal, &rate, &years);

    interest = principal * rate * years / 100.0;
    amount = principal + interest;
    discount = interest * 2 / 100.0;
    finalAmount = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", finalAmount);

    return 0;
}
