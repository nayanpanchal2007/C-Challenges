// Allocate memory for a struct representing a Point with x and y coordinates, set some values, and then properly deallocate the memory using free.
#include <stdio.h>
#include <stdlib.h>

typedef struct coordinate {
    float x;
    float y;
} coords;

int main() {
    coords *r;
    r = malloc(sizeof(struct coordinate));
    if (r == NULL) {
        printf("Memory not found!!!\n");
        return 1;
    }

    r->x = 5;
    r->y = 6;

    printf("Coordinate : (%.2f, %.2f).\n", r->x, r->y);

    free(r);
    r = NULL;
    return 0;
}