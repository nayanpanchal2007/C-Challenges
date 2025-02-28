// Implement a trim function that removes leading and trailing spaces from a string.
#include <stdio.h>
#include <string.h>

void trim_str(char str[], char new_str[]);

int main() {
    char str[] = "   Hello, world    ";
    char new_str[strlen(str)];

    trim_str(str, new_str);

    printf("Reversed String\n");
    printf("~~~~~%s~~~~~", new_str);
    return 0;
}

void trim_str(char str[], char new_str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (str[start] == ' ') start++;
    while (str[end] == ' ') end--;

    for (int i = start, j = 0; i <= end; i++) {
        if (str[i] == ' ') str[i] = '-';
        new_str[j++] = str[i];
    }
}