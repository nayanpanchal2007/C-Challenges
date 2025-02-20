// Create a program to verify if a number is a palindrome.
#include <stdio.h>

int main()
{
    int n;
    printf("Welcome to check palindrome number\n");
    printf("Please enter a number: ");
    scanf("%d", &n);

    int reverse = 0, num = n;
    while (n > 0)
    {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    printf("The reverse of %d is %d\n", num, reverse);

    if (num == reverse)
    {
        printf("The %d is a palidrome number.", num);
    }
    else
    {
        printf("The %d is not a palidrome number.", num);
    }
    return 0;
}