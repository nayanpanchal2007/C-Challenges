// Create a program to check whether a given number is prime using while.
#include <stdio.h>

int main()
{
    int num;
    printf("Welcome to check prime numbers\n");
    printf("Please enter a number: ");
    scanf("%d", &num);

    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            printf("%d is not prime.", num);
            return 0;
        }
        i++;
    }
    printf("%d is prime.", num);
    return 0;
}