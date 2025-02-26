// Write a function that uses pointer arithmetic to copy an array of char into another.
#include <stdio.h>

void copy_ch_arr(char *, int, char *);
void print_arr(char *, int);

int main() {
    char arr[] = {'N', 'A', 'Y', 'A', 'N'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char new_arr[size];
    
    printf("\n***Original array***\n");
    print_arr(arr, size);

    copy_ch_arr(arr, size, new_arr);

    printf("\n***After copying array***\n");
    print_arr(new_arr, size);
    return 0;
}

void copy_ch_arr(char *arr, int size, char *new_arr) {
    for (int i = 0; i < size; i++) {
        *(new_arr + i) = *(arr + i);
    }
}

void print_arr(char *arr, int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            printf("'%c',", *(arr + i));
        }
        if (i == size - 1) {
            printf(" '%c'", *(arr + i));
        }
        if (i > 0 && i < size - 1) {
            printf(" '%c',", *(arr + i));
        }
    }
    printf("}");
}