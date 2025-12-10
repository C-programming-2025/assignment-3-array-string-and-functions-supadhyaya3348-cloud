// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.

#include <stdio.h>
int calculatePower(int base, int exponent) {
    int result = 1;
    if (exponent < 0) {
        return -1; 
    }

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    int power = calculatePower(base, exponent);

    if (power == -1) {
        printf("Negative exponents are not supported in this program.\n");
    } else {
        printf("%d^%d = %d\n", base, exponent, power);
    }

    return 0;
}