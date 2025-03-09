// Pass a Car structure to a function that prints out a description of the car in one complete sentence.
#include <stdio.h>

typedef struct car {
    char company_name[25];
    char model[20];
    int year;
    char color[10];
} Car;

void write_car(Car *car) {
    printf("\tCompany_name: %s\n", car->company_name);
    printf("\tModel: %s\n", car->model);
    printf("\tYear: %d\n", car->year);
    printf("\tColor: %s\n\n", car->color);
}

int main() {
    Car tiago = {"Tata", "Ev", 2020, "Brown"};
    
    printf("for Tiago:-\n");
    write_car(&tiago);

    return 0;
}