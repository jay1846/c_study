//double pointer

#include <stdio.h>

int main(void){
    int i = 100;
    int *p = &i;
    int **q = &p;   // double pointer q indicate p

    *p = 200;       // through p insert value 200 in variable i
     printf("i=%d\n", i);

     **q = 300;
     printf("i=%d\n", i);

     return 0;
}

