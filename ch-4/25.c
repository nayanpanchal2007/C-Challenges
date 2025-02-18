// Create a program to find the minimum of two numbers using ternary operator.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a < b ? printf("Minimum number: %d", a) : printf("Minimum number: %d", b);
    return 0;
}