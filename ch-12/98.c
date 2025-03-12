// Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = 10;

    int *arr = malloc(n * sizeof(int));

    printf("\nHere random numbers:-\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d\t", arr[i]);
    }
    
    printf("\n");

    n /= 2;
    arr = realloc(arr, n * sizeof(int));

    printf("\nHere new allocated numbers:-\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}