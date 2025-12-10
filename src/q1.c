// Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>
int main() {
    int num[7] = {56,11,98,54,36,67,89};
    int max = num[0], min = num[0]; 
    int length = sizeof(num)/ sizeof(num[0]);

    for (int i = 1; i < length; i++)

    {
        if (max < num[i])
        {
            max = num[i];
        }
        if (min > num[i])
        {
            min = num[i];
        }
        
    }
    printf("the max num is %d\n", max);
    printf("the min num is %d\n", min);

    return 0;


}

