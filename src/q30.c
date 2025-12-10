//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>
int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0' || str[index] == '\n') {
        return 0; 
    }

    if (str[index] == ch) {
        return 1 + countOccurrences(str, ch, index + 1); 
    } else {
        return countOccurrences(str, ch, index + 1); 
    }
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int occurrences = countOccurrences(str, ch, 0);
    printf("%d\n", occurrences); 

    return 0;
}