#include <stdio.h>

int main(void){
    
    int i = 10;
    double f = 12.3;
    int *pi = NULL;         // NULL is a 0 value from address
    double *pf = NULL;

    pi = &i;
    pf = &f;
    printf("%p %p\n", pi, &i);
    printf("%p %p\n", pf, &f);
    return 0;
}