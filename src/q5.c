// Write a C program to merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main() {
    int arr1[100], arr2[50];
    int n1, n2;

    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array (sorted): ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second sorted array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array (sorted): ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = n1 - 1; 
    int j = n2 - 1; 
    int k = n1 + n2 - 1; 

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    printf("Merged sorted array: ");
    for (int m = 0; m < n1 + n2; m++) {
        printf("%d ", arr1[m]);
    }
    printf("\n");

    return 0;
}