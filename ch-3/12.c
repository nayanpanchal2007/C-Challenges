// Given an integer value, convert it to a floating-point value and print both.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("The integer value is %d\n", num);
    printf("The floating value is %f\n", (float)num);
    return 0;
}