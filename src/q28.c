// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.

#include <stdio.h>
void calculateBinary(int n, char str[], int *index) {
    if (n == 0) {
        return;
    }
    calculateBinary(n / 2, str, index);
    str[*index] = (n % 2) + '0';
    (*index)++;
}

int main() {
    int n;
    char binary[32]; 
    int index = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
    } else {
        calculateBinary(n, binary, &index);
        binary[index] = '\0'; 
        printf("Binary: %s\n", binary);
    }

    return 0;
}