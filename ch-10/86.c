// Create a program using do-while to find password checker until a valid password is entered.
#include <stdio.h>
#include <string.h>

int main() {
    const char STORED_PASSWORD[] = "Hello@";
    char password[100];
    int i = 0;

    do {
        if (i > 0) {
            printf("~~~Access Denied.~~~");
        }
        printf("\nEnter your password: ");
        scanf("%s", password);
        i++;
    } while (strcmp(password, STORED_PASSWORD) != 0);

    printf("~~~~~Access Granted.~~~~~\n");
    return 0;
}