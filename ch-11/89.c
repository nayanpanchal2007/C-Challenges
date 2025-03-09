// Initialize an array of Book structures with different data for each book using designated initializers.
#include <stdio.h>

typedef struct {
    char title[20];
    char author[25];
    float price;
} book_bank;

void write_structure(book_bank *book) {
    printf("\tTitle: %s\n", book->title);
    printf("\tAuthor: %s\n", book->author);
    printf("\tPrice: %.2f\n\n", book->price);
}

int main() {
    book_bank book[3] = {
        {"Ansi C", "Balagur", 650},
        {"Midnight's Children", "Salman Rushdie", 992},
        {"A Fine Balance", "Rohinton Mistry", 499.99}
    };

    printf("for Book1:-\n");
    write_structure(&book[0]);

    printf("for Book2:-\n");
    write_structure(&book[1]);

    printf("for Book3:-\n");
    write_structure(&book[2]);

    return 0;
}