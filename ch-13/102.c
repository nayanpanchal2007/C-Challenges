// Write a program that takes user input and writes it to a file, ensuring each entry is on a new line.
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr = fopen("file_input.txt", "w");

    char input[100];

    while (1) {
        printf("Enter your text (for break: \"exit\"): ");
        fgets(input, sizeof(input), stdin);
        if (strcmp(input, "exit\n") == 0) {
            break;
        }
        fputs(input, fptr);
    }

    fclose(fptr);
    fptr = NULL;
    return 0;
}