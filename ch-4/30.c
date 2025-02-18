// Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.
#include<stdio.h>
int main(){
    float a, b;
    char ch;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("What do you want to do with two numbers: ");
    scanf(" %c", &ch);
    switch(ch){
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a+b);
        break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a-b);
        break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a*b);
        break;
        case '/': printf("%.2f / %.2f = %.2f\n", a, b, a/b);
        break;
        default: printf("Please enter +, -, *, /\n");
    }
    return 0;
}