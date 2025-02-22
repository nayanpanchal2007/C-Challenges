// Write a function that adds that takes 4 int parameters and returns the sum.
#include <stdio.h>

int add(int, int, int, int);

int main()
{
    int a, b, c, d;
    printf("Welcome to sum four numbers\n");
    printf("Please, enter first number: ");
    scanf("%d", &a);
    printf("now, enter second number: ");
    scanf("%d", &b);
    printf("now, enter third number: ");
    scanf("%d", &c);
    printf("finally, enter fourth number: ");
    scanf("%d", &d);

    int sum = add(a, b, c, d);
    printf("The sum of given number is %d\n", sum);
    return 0;
}

int add(int a, int b, int c, int d)
{
    int sum = a + b + c + d;
    return sum;
}