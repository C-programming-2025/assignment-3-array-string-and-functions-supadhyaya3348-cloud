// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>
int countOccurrences(char str[], char ch) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int occurrences = countOccurrences(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrences);

    return 0;
}