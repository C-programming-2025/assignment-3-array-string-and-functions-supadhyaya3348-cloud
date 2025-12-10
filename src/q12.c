//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.

#include <stdio.h>
int isPalindrome(char str[]) {
    int start = 0, end = 0;
    while (str[end] != '\0' && str[end] != '\n') {
        end++;
    }
    end--; 

   
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    printf("%d\n", isPalindrome(str));

    return 0;
}