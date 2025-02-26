// Create a program to find the sum of two diagonal elements.
#include <stdio.h>

void sum(int arr[][3], int rows, int cols, int *sum1, int *sum2);

int main() {
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int sum1 = 0, sum2 = 0, rows = 3, cols = 3;
    
    sum(arr, rows, cols, &sum1, &sum2);
    printf("The sum of principle diagonal is %d\n", sum1);
    printf("The sum of other diagonal is %d\n", sum2);
    return 0;
}

void sum(int arr[][3], int rows, int cols, int *sum1, int *sum2) {
for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                *sum1 += arr[i][j];
            }

            if (i == rows - i - 1) {
                *sum2 += arr[i][j];
            }
        }
    }
}