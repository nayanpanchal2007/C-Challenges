// Create a program to print the area of a square by inputting its side length
#include<stdio.h>
int main()
{
    int a;
    printf("Please enter the length of the square: ");
    scanf("%d", &a);
    printf("The area of a square is %d", a*a);
    return 0;
}