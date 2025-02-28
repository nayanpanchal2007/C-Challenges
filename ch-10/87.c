// Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.
#include <stdio.h>
#include <string.h>

int main() {
    const char KEY[] = "exit";
    char key[100];

    do {
        printf("Enter a key: ");
        scanf("%s", key);

        if (strcmp(key, KEY) == 0) break;
    } while (1);
    return 0;
}