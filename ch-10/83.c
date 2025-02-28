// Write a function that takes a string and reverses it in place.
#include <stdio.h>
#include <string.h>

void reverse_str(char str[]);

int main() {
    char str[] = "Hello world";

    reverse_str(str);

    puts("The reverse string is given below:");
    puts(str);
    return 0;
}

void reverse_str(char str[]) {
    for (int i = 0; i < strlen(str) / 2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = temp;
    }
}