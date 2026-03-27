#include <stdio.h>

void sub(int b[], int size);

int main(void){
    int a[3] = {1,2,3};

    printf("%d %d %d\n", a[0], a[1], a[2]);
    sub(a,3);
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}

void sub(int b[], int size){        // we always have to limit the size of array. otherwise it cause Segmentation fault or other fatal bugs
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
}

/*
void sub(int b[], int size) works exactly same as
void sub(int *b, int size)
*/