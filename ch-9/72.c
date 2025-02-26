// Create a program to check is the array is palindrome or not.
#include <stdio.h>

int checkPalidrome(int [], int);

int main() {
    int arr1[] = {1, 3, 5, 78, 9}; // not palidrome
    int arr2[] = {1, 3, 3, 1}; // palidrome
    int arr3[] = {1, 2, 3, 2, 1}; // palidrome
    int size1 = sizeof(arr1) / sizeof (arr1[0]);
    int size2 = sizeof(arr2) / sizeof (arr2[0]);
    int size3 = sizeof(arr3) / sizeof (arr3[0]);

    printf("\n***Result for Array1***\n");
    if (checkPalidrome(arr1, size1)) {
        printf("First array is palidrome.\n");
    } else {
        printf("First array is not palidrome.\n");
    }

    printf("\n***Result for Array2***\n");
    if (checkPalidrome(arr2, size2)) {
        printf("Second array is palidrome.\n");
    } else {
        printf("Second array is not palidrome.\n");
    }

    printf("\n***Result for Array3***\n");
    if (checkPalidrome(arr3, size3)) {
        printf("Third array is palidrome.\n");
    } else {
        printf("Third array is not palidrome.\n");
    }
    return 0;
}

int checkPalidrome(int arr[], int size) {
    int isPalidrome = 1;
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalidrome = 0;
        }
    }
    return isPalidrome;
}