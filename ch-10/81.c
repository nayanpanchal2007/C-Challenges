// Create a simple text-based user login system that compares a stored password string using strcmp.
#include <stdio.h>
#include <string.h>

int main() {
    const char STORED_PASSWORD[] = "Nayan2007@";
    char password[50];
    printf("Welcome to secure system.\n");
    printf("Please enter your password: ");
    scanf(" %s", password);

    if(strcmp(password, STORED_PASSWORD) == 0) {
        printf("Access Granted.\n");
    } else {
        printf("Access Denied.\n");
    }
    return 0;
}