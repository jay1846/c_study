#include <stdio.h>

double get_max(double *A, int size);

int main(void){
    double A[] = {1.23, 3.14, 9.16, 100.90};
    double result = get_max(A, 4);
    printf("Max vlaue is: %.2f\n", result);
    return 0;
}

double get_max(double *A, int size){
    double max = *A++;

    while (--size > 0){
        if (*A > max){
            max = *A;
        }
        A++;
    }
    return max;
}