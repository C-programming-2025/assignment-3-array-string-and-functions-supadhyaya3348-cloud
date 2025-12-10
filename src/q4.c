// Implement a C program to find the second largest element in an array.

#include <stdio.h>

int main() {
    int num[7] = {56, 11, 98, 54, 36, 67, 89};
    int length = sizeof(num) / sizeof(num[0]);
    int largest, secondLargest;

    if (num[0] > num[1]) {
        largest = num[0];
        secondLargest = num[1];
    } else {
        largest = num[1];
        secondLargest = num[0];
    }
    
    for (int i = 2; i < length; i++) {
        if (num[i] > largest) {
            secondLargest = largest;
            largest = num[i];
        } else if (num[i] > secondLargest && num[i] != largest) {
            secondLargest = num[i];
        }
    }

    printf("The largest element is: %d\n", largest);
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}