// Call a function get_average that takes five int numbers and returns the average.
#include <stdio.h>

float get_average(int, int, int, int, int);

int main()
{
    int a, b, c, d, e;
    printf("Welcome to find average\n");
    printf("Please enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float average = get_average(a, b, c, d, e);
    printf("The average is %.2f", average);
    return 0;
}

float get_average(int a, int b, int c, int d, int e)
{
    float sum = a + b + c + d + e;
    float avg = sum / 5;
    return avg;
}