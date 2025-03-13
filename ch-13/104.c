// Create a program that performs both reading and writing operations on a file called data.txt
#include <stdio.h>

int main() {
    printf("Welcome to the bizzare world of reading and writing:\n");

    FILE *fptr = fopen("data.txt", "r+");
    if (!fptr) {
        printf("File doesn't exist!");
        return 1;
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), fptr);
    printf("Reading from the file I found:\n%s", buffer);

    fseek(fptr, 0, SEEK_END);
    fputs("This message was written by programmer\n", fptr);

    fclose(fptr);
    fptr = NULL;
    return 0;
}