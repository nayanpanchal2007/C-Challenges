// Develop a program that prints the multiplication table for a given number.
#include <stdio.h>

int main()
{
    int n;
    printf("Welocome to print multiplication table\n");
    printf("Please enter a number: ");
    scanf("%d", &n);
    
    printf("%d X 1  = %d\n", n, n * 1);
    printf("%d X 2  = %d\n", n, n * 2);
    printf("%d X 3  = %d\n", n, n * 3);
    printf("%d X 4  = %d\n", n, n * 4);
    printf("%d X 5  = %d\n", n, n * 5);
    printf("%d X 6  = %d\n", n, n * 6);
    printf("%d X 7  = %d\n", n, n * 7);
    printf("%d X 8  = %d\n", n, n * 8);
    printf("%d X 9  = %d\n", n, n * 9);
    printf("%d X 10 = %d\n", n, n * 10);

    return 0;
}