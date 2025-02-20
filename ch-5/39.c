// Create a program to print the Fibonacci series up to a certain number.
#include <stdio.h>

int main()
{
    int n;
    printf("Welcome to print fibonacci series\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 0)
    {
        printf("Invalid Input");
        return 0;
    }

    int first = 0, second = 1;

    printf("%d ", first);
    while (second <= n)
    {
        printf("%d ", second);
        int next = first + second;
        first = second;
        second = next;
    }
    return 0;
}