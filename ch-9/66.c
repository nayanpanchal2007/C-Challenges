// Create a program to find the sum and average of all elements in an array.
#include <stdio.h>

void sum_and_average(int arr[], int size, int *sum, float *average);

int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    float average;

    sum_and_average(arr, size, &sum, &average);

    printf("The sum of array elements is %d.\n", sum);
    printf("The average of array element is %f.\n", average);
    return 0;
}

void sum_and_average(int arr[], int size, int *sum, float *average) {
    for (int i = 0; i <= size; i++) {
        *sum += arr[i];
    }
    *average = (float) *sum / size;
}