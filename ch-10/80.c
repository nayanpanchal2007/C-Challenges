// Write a program to convert a input string to uppercase.
#include <stdio.h>
#include <ctype.h>

int main() {
    char text[50];
    printf("Welcome to converting string to uppercase\n");
    printf("Please enter the text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = toupper(text[i]);
    }

    printf("Here your text convert in uppercase: %s", text);
    return 0;
}