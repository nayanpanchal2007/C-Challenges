// Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_palidrome(char str[]);
void uppercase(char str[]);

int main() {
    char str[] = "Nayan";

    uppercase(str);

    if (check_palidrome(str)) {
        printf("The string is palidrome.\n");
    } else {
        printf("The string is not palidrome.\n");
    }
    
    return 0;
}

int check_palidrome(char str[]) {
    int is_palidrome = 1;
    for (int i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[strlen(str) - 1 - i]) is_palidrome = 0;
    }
    return is_palidrome;
}

void uppercase(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}