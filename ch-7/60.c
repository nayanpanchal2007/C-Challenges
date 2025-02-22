// Write a program to change the value of an integer variable using a pointer and the * operator.
#include <stdio.h>

int main() {
    int n = 10;
    int *p = &n;
    printf("Before : Value of n = %d\n", *p);
    *p = 20;
    printf("After : Value of n = %d\n", *p);
    return 0;
}