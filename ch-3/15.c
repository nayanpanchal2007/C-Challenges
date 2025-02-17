// Create a program to calculate the Area of a Triangle. Area of triangle = ½*B*H
#include<stdio.h>
int main()
{
    float b, h;
    printf("Please enter the base of triangle: ");
    scanf("%f", &b);
    printf("Please enter the height of triangle: ");
    scanf("%f", &h);
    printf("The area of the triangle is %.2f", .5 * b * h);
    return 0;
}