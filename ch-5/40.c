// Create a program to check if a number is an Armstrong number.
#include <stdio.h>

int main()
{
    int n;
    printf("Welcome to check Armstrong number\n");
    printf("Please enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int num = n;

    for (; n > 0; n /= 10)
    {
        sum += (n % 10) * (n % 10) * (n % 10);
    }

    if (sum == num)
    {   
        printf("The cubic sum of %d is %d\n", num, sum);
        printf("Therefore, %d is a Armstrong number.", num);
    }
    else 
    {   
        printf("The cubic sum of the %d is %d\n", num, sum);
        printf("Therefore, %d is not a Armstrong number.", num);
    }
    return 0;
}