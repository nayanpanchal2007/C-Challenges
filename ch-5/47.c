// Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    while (1)
    {
        printf("Please enter a number: ");
        scanf("%d", &n);
        if (n < 0)
        {
            continue;
        }
        sum += n;
        if (n == 0)
        {
            break;
        }
    }
    printf("The sum of all given numbers is %d", sum);
    return 0;
}