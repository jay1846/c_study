#include <stdio.h>

int main(void){

    int i = 3000;
    int *p = &i;

    printf("%p\n", p);
    printf("%p\n\n", &i);

    printf("%d\n", i);
    printf("%d\n", *p);

    return 0;
}