#include <stdio.h>

int main(void){

    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf(" pc = %p, pc+1 = %p, pc+2=%p\n", pc, pc+1, pc+2);
    printf(" pi = %p, pi+1 = %p, pi+2=%p\n", pi, pi+1, pi+2);
    printf(" pd = %p, pd+1 = %p, pd+2=%p\n", pd, pd+1, pd+2);

    return 0;
}