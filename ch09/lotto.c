#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h> // srand()  srand((unsigned)time(NULL));

#define MAX 45

int main(void){
    int i;

    srand((unsigned)time(NULL));    // srand() functions as a seed
                                    // random number function has a algorithm, same seed same result
                                    // current time changes every second, its most common way to get a unique seed

    for( i = 0; i < 6; i++){
        printf("%d ", 1+rand()%MAX);
    }
    printf("\n");

    return 0;
}
