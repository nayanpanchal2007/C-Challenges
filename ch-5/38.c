// Create a program to reverse the digits of a number.
#include <stdio.h>

int main()
{
    int num;
    printf("Welcome to reverse a number\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    
    int reverse = 0;
    int number = num;
    for (; num > 0; num /= 10)
    {
        reverse = reverse * 10 + num % 10;
    }
    printf("The reverse of %d is %d", number, reverse);
    return 0;
}