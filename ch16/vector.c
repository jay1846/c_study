#include <stdio.h>

struct vector {                     // declare struct vector. x and y are members of struct
    double x;
    double y;
};

struct vector get_vector_sum(struct vector a, struct vector b);     // prototype of function. return struct value

int main(void){
    struct vector a = {2.0, 3.0};       // struct variable a, b, sum has declared.
    struct vector b = {5.0, 8.0};
    struct vector sum;

    sum = get_vector_sum(a,b);          // Argument a and b will be conveyed.
    printf("Sum of vector: (%.1f, %.1f).\n", sum.x, sum.y);

    return 0;
}

struct vector get_gector_sum(struct vector a, struct vector b){
    struct vector result;
    
    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}