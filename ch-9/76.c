// Create a program to do sum and average of all elements in a 2-array.
#include <stdio.h>

void sum_and_average(int arr[3][3], int rows, int cols, int *sum, float *average);

int main() {
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 3, 2}};
    int sum = 0;
    float average;
    int rows = 3, cols = 3;

    sum_and_average(arr, rows, cols, &sum, &average);
    printf("The sum is %d\n", sum);
    printf("The average is %f\n", average);
    return 0;
}

void sum_and_average(int arr[3][3], int rows, int cols, int *sum, float *average) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *sum += arr[i][j];
        }
    }
    *average = (float) *sum / (rows * cols);
}