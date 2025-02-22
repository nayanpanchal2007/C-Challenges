// Define a function square that takes an int and returns its square.
#include <stdio.h>

int square(int);

int main()
{
    int n;
    printf("Welcome to find square\n");
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("The square of %d is %d", n, square(n));
    return 0;
}

int square(int n)
{
    int square = n * n;
    return square;
}