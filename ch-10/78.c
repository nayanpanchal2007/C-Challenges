// Read a line of text from the user using fgets and then print it using puts.
#include <stdio.h>

int main() {
    char name[50];
    printf("Welcome to show using fgets and puts\n");
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("You have entered: ");
    puts(name);
    return 0;
}