// Create a program that determines if a number is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("The number is negative.");
    }
    else if (n > 0)
    {
        printf("The number is positive.");
    }
    else 
    {
        printf("The number is zero.");
    }
    return 0;
}