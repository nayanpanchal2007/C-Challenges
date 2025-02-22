// Create a program using recursion to display the Fibonacci series upto a certain number.
#include <stdio.h>

long long fibo(int);

int main()
{
    int terms;
    printf("Welcome to print fibonacci series by recursion\n");
    printf("How many position do you want to print: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++)
    {
        printf("%lld ", fibo(i));
    }
    return 0;
}

long long fibo(int pos)
{
    if (pos <= 1) return pos;
    int current = fibo(pos - 1) + fibo(pos - 2);
    return current;
}