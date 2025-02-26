// Create a program to return a new array deleting a specific element.
#include <stdio.h>

void delete(int arr[], int size, int new_arr[], int *new_size, int element);
void print_arr(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 9;
    int new_size = 8;
    int new_arr[new_size];
    
    delete(arr, size, new_arr, &new_size, element);
    printf("After delete %d, \n", element);
    print_arr(new_arr, new_size);
    
    return 0;
}

void delete(int arr[], int size, int new_arr[], int *new_size, int element) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != element) {
            new_arr[j++] = arr[i];
        }
    }
    *new_size = j;
}

void print_arr(int arr[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf(" %d ", arr[i]);
    }
    printf("}");
}