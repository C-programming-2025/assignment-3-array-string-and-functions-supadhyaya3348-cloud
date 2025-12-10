// Implement a C program to count the occurrence of a specific character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}