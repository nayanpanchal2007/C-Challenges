// Create a program using continue to print only even numbers using continue for odd numbers.
#include <stdio.h>

int main()
{
    int n;
    printf("Welcome to print even numbers\n");
    printf("Please enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}