// Create a program to convert Fahrenheit to Celsius °C = (°F - 32) × 5/9
#include<stdio.h>
int main()
{
    float c, f;
    printf("Please enter the fahrenheit value: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The celsius value is %.2f", c);
    return 0;
}