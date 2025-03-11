// Create a program that uses malloc to dynamically allocate an array for a specified number of float values entered by the user and then stores user-entered numbers into it.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Please enter the size of array: ");
    scanf("%d", &size);

    float *arr = (float*) malloc(size * sizeof(float));
    if (arr == NULL) {
        printf("Not allocated memory.\n");
        return 1;
    }
    
    for (int i = 0; i < size; i++) {
        printf("Enter arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < size; i++) {
        printf("%.2f\t", arr[i]);
    }

    free(arr);
    arr = NULL;
    
    return 0;
}