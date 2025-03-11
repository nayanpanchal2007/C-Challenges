// Use calloc to allocate an array for a set of char characters representing a sentence, ensuring all the memory is initialized to zero.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 100;
    char *text = (char *) calloc(size, sizeof(char));

    if (text == NULL) {
        printf("Memory unavailable!!!\n");
        return 1;
    }

    printf("Ensuring all memory is initialize to zero.\n");
    for (int i = 0; i < 100; i++) {
        printf(" %d", text[i]);
    }

    printf("\nEnter a text: ");
    fgets(text, 100, stdin);

    printf("\nHere is your text:-\n%s", text);

    free(text);
    text = NULL;
    
    return 0;
}