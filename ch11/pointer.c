#include <stdio.h>

int main(void){

    int i = 3000;
    int *p = &i;

    printf("%p\n", p);              // address
    printf("%p\n\n", &i);           // address

    printf("%d\n", i);              // value
    printf("%d\n", *p);             // value

    return 0;
}