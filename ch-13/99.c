// Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.
#include <stdio.h>

int main() {
    char file_name[20];
    printf("Welcome to file opening:-\n");
    printf("Please enter a file name: ");
    scanf("%s", file_name);

    FILE *fptr = fopen(file_name, "r");
    if (fptr) {
        printf("---\"%s\" was opened successfully:)---\n", file_name);
        fclose(fptr);
    } else {
        printf("---\"%s\" was not exist:(---\n", file_name);
    }
    
    return 0;
}