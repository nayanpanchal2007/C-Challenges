// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
#include<stdio.h>
int main()
{
    char f_name[50], l_name[50];
    int age;
    printf("Please enter your first name: ");
    gets(f_name);
    printf("Please enter your last name: ");
    gets(l_name);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Your name is %s %s and you are %d years old.\n", f_name, l_name, age);
    return 0;
}