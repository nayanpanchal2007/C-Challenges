// Create a program to calculate Compound interest. Compound Interest = P(1 + R/100)t
#include<stdio.h>
int main()
{
    float p, r, t;
    printf("Please enter the principal amount: ");
    scanf("%f", &p);
    printf("Please enter the rate of interest: ");
    scanf("%f", &r);
    printf("Please enter the number of years: ");
    scanf("%f", &t);
    printf("The compount interest: %.2f", p*(1+r/100)*t);
    return 0;
}