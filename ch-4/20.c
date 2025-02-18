// Create a program that determines if a number is odd or even.
#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    return 0;
}