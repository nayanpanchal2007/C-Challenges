// Create a program that categorize a person into different age groups Child -> below 13 Teen -> below 20 Adult -> below 60 Senior-> above 60
#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age > 0)
    {
        if (age < 13)
        {
            printf("Age Group: Child");
        }
        else if (age < 20)
        {
            printf("Age Group: Teen");
        }
        else if (age < 60)
        {
            printf("Age Group: Adult");
        }
        else
        {
            printf("Age Group: Senior");
        }
    }
    return 0;
}