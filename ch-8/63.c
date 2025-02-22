// Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
#include<stdio.h>

int main() {
    long long km, miles;
    printf("Welcome to convert kilometers to miles\n");
    printf("Please enter the distance in kilometers: ");
    scanf("%lld", &km);
    
    miles = 1.609344 * km;
    printf("The conversion is %lld", miles);
    return 0;
}