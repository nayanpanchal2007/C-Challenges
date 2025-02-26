// Create a program to find the maximum and minimum element in an array.
#include <stdio.h>

void find_max_min(int arr[], int size, int *min, int *max);

int main() {
    int arr[] = {1, 54, 5, 9, 0, 3};
    int min = arr[0], max = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    find_max_min(arr, size, &min, &max);
    printf("Min = %d\nMax = %d\n", min, max);
    return 0;
}

void find_max_min(int arr[], int size, int *min, int *max) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}