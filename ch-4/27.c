// Create a program to calculate the absolute value of a given integer using ternary operator.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int value = (num < 0) ? -num : num;
    printf("The absolute value of %d is %d\n", num, value);
    return 0;
}