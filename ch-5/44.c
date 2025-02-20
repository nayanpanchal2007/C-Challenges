// Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
        if (n == 0)
        {
            break;
        }
    }
    printf("The sum of all numbers is %d", sum);
    return 0;
}