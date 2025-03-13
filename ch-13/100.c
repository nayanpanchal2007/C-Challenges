// Create a program that reads integers from a file and calculates their sum.
#include <stdio.h>

int main() {
    FILE *fptr = fopen("num.txt", "r");
    if (fptr == NULL) {
        printf("File doesn't exist:(\n");
        return 1;
    }

    int temp, sum = 0;

    while (fscanf(fptr, "%d", &temp) == 1) {
        sum += temp;
    }

    printf("The sum = %d\n", sum);

    fclose(fptr);
    fptr = NULL;
    return 0;
}