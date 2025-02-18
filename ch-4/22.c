// Create a program that determines if a given year is a leap year (considering conditions like divisible by 4 but not 100, unless also divisible by 400).
#include <stdio.h>
int main()
{
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year is a leap year.");
    }
    else
    {
        printf("The year is not a leap year");
    }
    return 0;
}