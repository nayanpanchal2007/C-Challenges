// Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    int year;
    int gpa;
} student;

void read_student_structure(student *student) {
    printf("\tId: ");
    scanf("%d", &student->id);
    getchar();
    printf("\tName: ");
    fgets(student->name, sizeof(student->name), stdin);
    printf("\tYear: ");
    scanf("%d", &student->year);
    printf("\tGPA: ");
    scanf("%d", &student->gpa);
    printf("\n");
}

void write_student_structure(student *student) {
    printf("\tId: %d\n", student->id);
    printf("\tName: %s", student->name);
    printf("\tYear: %d\n", student->year);
    printf("\tGPA: %d\n", student->gpa);
    printf("\n");
}

int main() {
    student OP;

    printf("for OP:-\n");
    read_student_structure(&OP);
    
    printf("for OP:-\n");
    write_student_structure(&OP);
    
    return 0;
}