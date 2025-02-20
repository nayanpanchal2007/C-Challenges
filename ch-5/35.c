// Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int min, max;
    min = (num1 < num2) ? num1 : num2;
    max = num1 * num2;

    for (int i = min; i < max; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            printf("The LCM of %d and %d is %d", num1, num2, i);
            break;
        }
    }
    return 0;
}