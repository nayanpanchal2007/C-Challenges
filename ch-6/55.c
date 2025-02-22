// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.
#include <stdio.h>

void increment(int n)
{
    printf("Before increment: %d\n", n);
    n++;
    printf("After increament: %d\n", n);
}

int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("Before function run: %d\n", n);
    increment(n);
    printf("After function run: %d\n", n);
    return 0;
}