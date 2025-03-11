// Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int n = 10;
    int *arr = (int *) malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory is unavailable!!! :(");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
        printf("%d\t", arr[i]);
    }

    printf("\n");

    n = 5;
    arr = (int *) realloc(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    
    free(arr);
    arr = NULL;
    return 0;
}