// Create a program to sum all odd numbers from 1 to a specified number N.
#include <stdio.h>

int main()
{
    int n;
    printf("Welcome to odd number sum world\n");
    printf("Please enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    printf("The sum of %d odd number sum is %d", n, sum);
    return 0;
}