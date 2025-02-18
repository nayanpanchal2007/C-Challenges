// Create a program that calculates grades based on marks A -> above 90% B -> above 75% C -> above 60% D -> above 30% F -> below 30%
#include<stdio.h>
int main()
{
    int marks;
    printf("Please enter your marks: ");
    scanf("%d", &marks);
    if(marks>=0 && marks<=100)
    {
        if(marks>90)
        {
            printf("Grade: A");
        }
        else if(marks>75)
        {
            printf("Grade: B");
        }
        else if(marks>60)
        {
            printf("Grade: C");
        }
        else if(marks>30)
        {
            printf("Grade: D");
        }
        else
        {
            printf("Grade: F");
        }
    }
    else
    {
        printf("Please enter your marks in between 0-100.");
    }
    return 0;
}