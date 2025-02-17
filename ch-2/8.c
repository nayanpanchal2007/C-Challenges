// Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
#include<stdio.h>
int main()
{
    const float PI = 3.14159;
    int r;
    printf("Please enter the radius of the circle: ");
    scanf("%d", &r);
    printf("The circumference of the circle is %f", 2*PI*r);
    return 0;
}