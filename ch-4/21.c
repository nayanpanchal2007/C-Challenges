// Create a program that determines the greatest of the three numbers.
#include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Please enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
            else
            max = c;
    }
    printf("Maximum number: %d", max);
    return 0;
}