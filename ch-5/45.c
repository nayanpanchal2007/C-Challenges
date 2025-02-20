// Create a program using for loop multiplication table for a number.
#include <stdio.h>
int main()
{
    int n;
    printf("Welcome to print multiplication table.\n");
    printf("Please enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%4d X %2d = %d\n", n, i, n * i);
    }
    return 0;
}