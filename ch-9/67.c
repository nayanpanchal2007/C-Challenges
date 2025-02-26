// Create a program to find number of occurrences of an element in an array.
#include <stdio.h>

int occurances(int arr[], int size, int element);

int main() {
    int arr[] = {1, 2, 5, 9, 10, 2, 5, 5, 2, 9, 11, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 5;
    int result = occurances(arr, size, element);
    printf("The number of occurance of %d are %d.\n", element, result);
    return 0;
}

int occurances(int arr[], int size, int element) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            counter++;
        }
    }
    return counter;
}