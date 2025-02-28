// Use printf with format specifiers to format and print a date string (day, month, year).
#include <stdio.h>

int main() {
    int date;
    char day[15];
    char month[20];
    int year;

    printf("Welcome to formating date\n");
    printf("Please enter current date: ");
    scanf("%d", &date);
    printf("Now enter current day: ");
    scanf("%s", &day);
    printf("Now enter current month: ");
    scanf("%s", &month);
    printf("Finally enter current year: ");
    scanf("%d", &year);

    printf("The current date with formating is given below:\n");
    printf("%s %d %s %d", day, date, month, year);
    return 0;
}