// relationship between pointer and array
#include <stdio.h>

int main(void){

    int a[] = {10, 20, 30, 40, 50};

    printf("a = %p\n", a);              // use name of array as a pointer
    printf("a + 1 = %p\n", a+1);        
    printf("a = %d\n", *a);             // *p = a[0]
    printf("a + 1 = %d\n", *(a+1));

    return 0;
}