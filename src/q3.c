// Write a C program to sort an array of integers in ascending order using a sorting algorithm of your choice (e.g., bubble sort, selection sort, insertion sort).


#include <stdio.h>
int main(){

    int num[5] = {1,2,5,8,4};
    int length = sizeof(num) / sizeof(num[0]);
    int temp;

    printf("the original array is: ");
    for (int i = 0; i < length; i++){
        printf("%d\n", num[i]);

    }
    for (int i = 0 ; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (num[j] > num[j + 1]){
                temp = num[j];
                num [j] = num[j + 1];
                num[j + 1] = temp;

            }
        }
    }
    printf("the sorted array is: ");
    for (int i = 0; i < length; i++){
        printf("%d\n", num[i]);

    }
    


    return 0;

}