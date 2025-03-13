// Develop a program that appends user input to the end of a log file each time it's run.
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    puts("Welcome to append log file.");
    FILE *fptr  = fopen("mylog.log", "a");
    
    while (1) {
        printf("Enter input (for break: \"exit\"): ");
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