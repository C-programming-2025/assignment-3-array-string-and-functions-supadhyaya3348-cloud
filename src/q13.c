// Write a function named findFactorial that takes an integer as input and returns its factorial.

#include <stdio.h>
int findFactorial(int n) {
    int fact = 1;

    if (n < 0) {
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    int result = findFactorial(num);

    if (result == -1) {
        printf("Factorial of a negative number is undefined.\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}