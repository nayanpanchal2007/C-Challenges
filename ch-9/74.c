// Create a program to merge two sorted arrays.
#include <stdio.h>

void merge_sorted_arrays(int *, int, int *, int, int *, int);
void print_arr(int *, int);

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    int arr3[size3];

    merge_sorted_arrays(arr1, size1, arr2, size2, arr3, size3);
    print_arr(arr3, size3);
    return 0;
}

void merge_sorted_arrays(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3) {
    int i = 0, j = 0, k = 0;
    while (k < size3) {
        if (j == size2 || (i < size1 && arr1[i] < arr2[j])) {
            arr3[k] = arr1[i++];
        } else {
            arr3[k] = arr2[j++];
        }
        k++;
    }
}

void print_arr(int *arr, int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf(" %d ", arr[i]);
    }
    printf("}");
}