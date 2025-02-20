// Create a program to find the Greatest Common Divisor (GCD) of two integers.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Welcome to find GCD \n");
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;
    int min = 1;
    for (int i = min + 1; i < max; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("The GCD of %d and %d is %d", num1, num2, i);
            return 0;
        }
    }
    return 0;
}