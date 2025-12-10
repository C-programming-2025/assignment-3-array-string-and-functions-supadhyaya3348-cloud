// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.

#include <stdio.h>
int calculateFactorial(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * calculateFactorial(n - 1); 
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    int result = calculateFactorial(num);

    if (result == -1) {
        printf("Factorial of a negative number is undefined.\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}