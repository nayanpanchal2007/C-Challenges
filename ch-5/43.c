// Create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n >= 0)
        {
            return 0;
        }
    } while (1);
}