#include <stdio.h>

struct vector {
    double x;
    double y;
};

// get pointer as a parameter and fill into a new address
void get_vector_sum(struct vector *a, struct vector *b, struct vector *result){
    // -> operator is used because we access through pointer
    result -> x = a->x + b->x;
    result -> y = a->y + b->y;
}

int main(void){
    struct vector a = {2.0, 4.0};
    struct vector b = {4.0, 6.0};
    struct vector result;

    get_vector_sum(&a, &b, &result);         // convey address of variable

    printf("Sum of vector: (%.1f, %.1f).\n", result.x, result.y);

    return 0;
}