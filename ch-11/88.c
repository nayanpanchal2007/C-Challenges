// Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.
#include <stdio.h>

struct book_bank {
    char title[20];
    char author[25];
    float price;
};

void write_structure(struct book_bank book) {
    printf("\tTitle: %s", book.title);
    printf("\tAuthor: %s", book.author);
    printf("\tPrice: %.2f\n", book.price);
    printf("\n");
}

int main() {
    struct book_bank book1, book2;
    printf("For Book1:-\n");
    printf("\tTitle: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    printf("\tAuthor: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    printf("\tPrice: ");
    scanf("%f", &book1.price);
    while (getchar() != '\n');

    printf("For Book2:-\n");
    printf("\tTitle: ");
    fgets(book2.title, sizeof(book2.title), stdin);
    printf("\tAuthor: ");
    fgets(book2.author, sizeof(book2.author), stdin);
    printf("\tPrice: ");
    scanf("%f", &book2.price);

    printf("\n");

    printf("For Book1:-\n");
    write_structure(book1);

    printf("For Book2:-\n");
    write_structure(book2);

    return 0;
}