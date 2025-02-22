// Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.
#include <stdio.h>

int main() {
    int n;
    int *p = &n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Value is %d\n", *p);
    return 0;
}