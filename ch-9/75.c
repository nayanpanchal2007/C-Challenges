// Create a program to search an element in a 2-D array.
#include <stdio.h>

int search(int arr[][3], int rows, int cols, int element);

int main() {
    printf("Welcome to serching in 2D arrays\n");
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 3, 2}};    

    int element = 3;
    int occ = search(arr, 3, 3, element);
    printf("%d is found %d times.\n", element, occ);
    return 0;
}

int search(int arr[][3], int rows, int cols, int element) {
    int counter = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == element) {
                counter++;
            }
        }
    }
    return counter;
}