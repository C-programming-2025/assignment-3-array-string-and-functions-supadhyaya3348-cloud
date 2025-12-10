// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.

#include <stdio.h>
double calculateAverage(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return (double)sum / size; 
}

int main() {
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double avg = calculateAverage(arr, n);
    printf("Average of the array: %.2lf\n", avg);

    return 0;
}