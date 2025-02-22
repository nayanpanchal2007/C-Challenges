// Create a program using recursion to check if a number is a palindrome using recursion.
#include <stdio.h>

int reverse(int, int);

int main()
{
    int num;
    printf("Welcome to check palidrome number\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    int rev = reverse(num, 0);
    if (num == rev)
    {
        printf("%d is palidrome", num);
    }
    else
    {
        printf("%d is not palidrome", num);
    }
    return 0;
}

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    return reverse(num / 10, rev * 10 + num % 10);
}