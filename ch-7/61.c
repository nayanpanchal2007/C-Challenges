// Declare a pointer to a char and use it to read and print a character entered by the user.
#include <stdio.h>

int main() {
    char ch;
    char *p = &ch;
    printf("Please enter a character: ");
    scanf("%c", p);

    printf("Character is %c\n", *p);
    printf("Character is %c\n", ch);
    return 0;
}