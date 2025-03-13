// Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file.
#include<stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    fptr1 = fopen("text.txt", "r");
    fptr2 = fopen("copy.txt", "w");
    if (fptr1 == NULL) {
        printf("Text file doesn't exist.\n");
        return 1;
    }

    while (1) {
        char ch = fgetc(fptr1);
        if (ch == EOF) {
            break;
        }
        fputc(ch, fptr2);
    }

    fclose(fptr1);
    fptr1 = NULL;
    fclose(fptr2);
    fptr2 = NULL;
    return 0;
}