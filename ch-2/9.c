// Create a program to print the area of a circle by inputting its radius.
#include <stdio.h>
int main()
{
    float r;
    printf("Please enter the radius of a circle: ");
    scanf("%f", &r);
    printf("The area of the circle = %.2f", 3.14 * r * r);
    return 0;
}