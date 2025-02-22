// Write a C program that initializes an unsigned int to its maximum possible value and an int to a negative number. Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow
#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int max_unsigned = UINT_MAX;
    int negative_int = -1;
    printf("\nWithout adding 1:\n");
    printf("unsigned int = %u\n", max_unsigned);
    printf("negative int = %d\n", negative_int);

    max_unsigned++;
    negative_int++;
    printf("\nAfter adding 1:\n");
    printf("unsigned int = %u\n", max_unsigned);
    printf("negative int = %d\n", negative_int);
    return 0;
}