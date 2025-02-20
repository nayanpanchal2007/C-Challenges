#include <stdio.h>

void right_half_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

void reverse_right_half_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; i >= 1; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}

void left_half_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Welcome to printing star pettern\n");
    printf("Please enter a row number: ");
    scanf("%d", &n);

    int form;
    printf("Please enter a pettern foramtion(1 = Normal star, 2 = Reverse star, 3 = Left vertex star): ");
    scanf("%d", &form);

    switch (form)
    {
        case 1: right_half_pyramid(n);
        break;

        case 2: reverse_right_half_pyramid(n);
        break;

        case 3: left_half_pyramid(n);
        break;

        default: printf("Please enter from 1, 2, 3.");
    }
    return 0;
}