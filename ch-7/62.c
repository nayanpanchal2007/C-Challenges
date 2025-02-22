// Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. Write a main function to test it with different values.
#include <stdio.h>

void min_max(int*, int*, int*, int*);

int main() {
    int a, b, min, max;
    printf("Welcome to find min and max\n");
    printf("Please enter first number: ");
    scanf("%d", &a);
    printf("Now enter second number: ");
    scanf("%d", &b);

    min_max(&a, &b, &min, &max);
    printf("Between %d and %d, Minimum is %d and Maximum is %d", a, b, min, max);
    return 0;
}

void min_max(int *a, int *b, int *min, int *max) {
    if (*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}