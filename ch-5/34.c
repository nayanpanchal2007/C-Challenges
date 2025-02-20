// Create a program that computes the sum of the digits of an integer.
#include <stdio.h>

int main()
{
    int num;
    printf("Welcome to calculate the sum of the digits\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    int copy = num;

    int sum = 0;
    for (; copy > 0; copy /= 10)
    {
        sum += copy % 10;
    }
    printf("The sum of digits of %d is %d", num, sum);
    return 0;
}