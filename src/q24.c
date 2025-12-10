// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.

#include <stdio.h>
int calculatePower(int base, int exponent) {
    if (exponent < 0) {
        return -1; 
    }
    if (exponent == 0) {
        return 1; 
    }
    return base * calculatePower(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    int result = calculatePower(base, exponent);

    if (result == -1) {
        printf("Negative exponents are not supported.\n");
    } else {
        printf("%d^%d = %d\n", base, exponent, result);
    }

    return 0;
}