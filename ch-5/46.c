// Create a program using for to display if a number is prime or not.
#include <stdio.h>

int main()
{
    int n;
    printf("Welcome to prime checker\n");
    printf("Please enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not prime.", n);
            return 0;
        }
    }

    printf("%d is prime.", n);
    return 0;
}