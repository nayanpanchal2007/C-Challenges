// Write a program that continuously reads integers from the user and prints their squares. Use an infinite loop and a break statement to exit when a special number (e.g., -1) is entered.
#include <stdio.h>

int main()
{
    int n;
    while(1)
    {
        printf("Enter a number(for exit enter -1): ");
        scanf("%d", &n);
        printf("The square of %d is %d\n", n, n * n);
        if (n == -1)
        {
            break;
        }
    }
}