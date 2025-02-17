// Create a program to calculate Perimeter of a rectangle. Perimeter of rectangle ABCD = A+B+C+D
#include <stdio.h>
int main()
{
    int l, b;
    printf("Please enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Please enter the bregth of the rectangle: ");
    scanf("%d", &b);
    int A = l;
    int B = b;
    int C = A;
    int D = B;
    printf("The perimeter of the rectangle ABCD = %d", A + B + C + D);
    return 0;
}