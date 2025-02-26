// Create a program to reverse an array.
#include <stdio.h>

void reverse(int arr[], int size);
void printArr(int arr[], int size);

int main() {
    int arr[] = {1, 3, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);
    printf("The reversed array is given below:\n");
    printArr(arr, size);

    return 0;
}

void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printArr(int arr[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            printf("%d,", arr[i]);
        }
        if (i == size - 1) {
            printf(" %d", arr[i]);
        }
        if (i > 0 && i < size - 1) {
            printf(" %d,", arr[i]);
        }
    }
    printf("}");
}