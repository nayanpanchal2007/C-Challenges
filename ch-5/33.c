// Write a function that calculates the factorial of a given number.
#include <stdio.h>

void factorial(int n)
{
    unsigned long long fact = 1;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %llu", n, fact);
}

int main()
{
    int n;
    printf("Welcome to factorial calculator\n");
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("The negative number doesn't have any factorial.");
        return 0;
    }
    factorial(n);
    return 0;
}