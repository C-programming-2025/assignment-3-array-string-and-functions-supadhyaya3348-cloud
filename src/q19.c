//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.

#include <stdio.h>


void calculateFactorialSeries(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i; 
        printf("%d! = %d\n", i, factorial);
    }
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial series up to %d:\n", n);
    calculateFactorialSeries(n);

    return 0;
}