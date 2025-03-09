// Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
#include <stdio.h>

struct book {
    char title[25];
    char author[20];
    int page;
    float price;
};

struct student {
    int id;
    char name[20];
    float cgpa;
    struct book;
};

typedef struct book book;
typedef struct student student;

int main() {

    return 0;
}