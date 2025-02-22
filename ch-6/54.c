// Create a function max that takes two float arguments and returns the larger value.
#include <stdio.h>

float max(float, float);

int main()
{
    printf("Welcome to check big number\n");
    float m, n;
    printf("Please enter first number: ");
    scanf("%f", &m);
    printf("Now enter first number: ");
    scanf("%f", &n);

    float big = max(m, n);
    printf("The maximum number is %.2f", big);
    return 0;
}

float max(float m, float n)
{
    float big = m > n ? m : n;
    return big;
}