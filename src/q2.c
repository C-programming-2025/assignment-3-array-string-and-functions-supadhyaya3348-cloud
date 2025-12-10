// Implement a C program to reverse the elements of an array.
#include <stdio.h>
int main() {
    int array[5] = {10,20,30,40,50};
    int length = sizeof(array) / sizeof(array[0]);
    int temp;

    printf("the original set of array");
    for (int i = 0; i < length; i++){
        printf("%d\n", array[i]);

    }
    //reversing the array 
    for (int i = 0; i < length / 2 ; i++) {
        temp = array [i];
        array[i] = array[length - 1 -i];
        array[length - 1 -i] = temp;
    
    }
    //printing the reverse array 
    printf("the reversed array");
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    
    }
    printf("\n");
  return 0;



}
