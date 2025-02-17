// Create a program to calculate simple interest. Simple Interest = (P x T x R)/100
#include <stdio.h>
int main()
{
    float p, t, r;
    printf("Please enter the principal amount: ");
    scanf("%f", &p);
    printf("Please enter the years: ");
    scanf("%f", &t);
    printf("Please enter the rate of interest: ");
    scanf("%f", &r);
    printf("The simple interest: %.2f", (p * t * r) / 100);
    return 0;
}