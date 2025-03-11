// Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.
#include <stdio.h>
#include <stdlib.h>

struct car {
    char company[25];
    char model[20];
    int year;
    char color[10];
};

typedef struct car car;

void write_car_structure(car *car) {
    printf("Company Name: %s", car->company);
    printf("Model: %s", car->model);
    printf("Year: %d\n", car->year);
    printf("Color: %s", car->color);
}

int main() {

    printf("Welcome to dynamic island:-\n\n");
    car *c1 = malloc(sizeof(car));

    if (c1 == NULL) {
        printf("Memory not find.\n");
        return 1;
    }

    printf("Enter car Details:\n\n");
    printf("Company name: ");
    fgets(c1->company, sizeof(c1->company), stdin);
    printf("Model: ");
    fgets(c1->model, sizeof(c1->model), stdin);
    printf("Year: ");
    scanf("%d%c", &c1->year);
    printf("Color: ");
    fgets(c1->color, sizeof(c1->color), stdin);
    
    printf("\n");
    write_car_structure(c1);

    free(c1);
    c1 = NULL;
    
    return 0;
}