// Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.
#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char ch;
    printf("Size of int: %d\n", sizeof(i));
    printf("Size of int: %d\n", sizeof(f));
    printf("Size of int: %d\n", sizeof(d));
    printf("Size of int: %d\n", sizeof(ch));
    return 0;
}