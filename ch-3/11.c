// Create a program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
#include <stdio.h>
int main()
{
    float a, b;
    printf("Please enter the first number: ");
    scanf("%f", &a);
    printf("Please enter the second number: ");
    scanf("%f", &b);
    printf("The addition of %.2f and %.2f is %.2f\n", a, b, a + b);
    printf("The subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
    printf("The multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
    printf("The division of %.2f and %.2f is %.2f\n", a, b, a / b);
    printf("The modulus of %.2f and %.2f is %.2f\n", a, b, (int)a % (int)b);
    return 0;
}