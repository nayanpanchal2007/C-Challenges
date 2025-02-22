// Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
#include <stdio.h>

int main() {
    int num = 20;
    long fact_l = 1;
    long long fact_ll = 1;

    for (int i = 2; i <= num; i++) {
        fact_l *= i;
        fact_ll *= i;
    }

    printf("By long, factorial of %d is %ld\nBy long long, factorial of %d is %lld\n", num, fact_l, num, fact_ll);
    return 0;
}