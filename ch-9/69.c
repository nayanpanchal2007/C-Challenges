// Create a program to check if the given array is sorted.
#include <stdio.h>

int is_sorted(int arr[], int size);

int main() {
    int arr1[] = {1, 3, 5, 9}; // increasing sorted    
    int arr2[] = {12, 8, 5, 3}; // decreasing sorted
    int arr3[] = {1, 5, 3, 9}; // not sorted

    if(is_sorted(arr1, sizeof(arr1) / sizeof(arr1[0]))) {
        printf("First array is sorted.\n");
    } else {
        printf("First array is not sorted.\n");
    }

    if(is_sorted(arr2, sizeof(arr2) / sizeof(arr2[0]))) {
        printf("Second array is sorted.\n");
    } else {
        printf("Second array is not sorted.\n");
    }

    if(is_sorted(arr3, sizeof(arr3) / sizeof(arr3[0]))) {
        printf("Third array is sorted.\n");
    } else {
        printf("Third array is not sorted.\n");
    }
    return 0;
}

int is_sorted(int arr[], int size) {
    int is_increasing = 1;
    int is_decreasing = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            is_decreasing = 0;
        } else if (arr[i] < arr[i - 1]) {
            is_increasing = 0;
        }
    }
    return is_increasing || is_decreasing;
}