#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int coin_toss();

int main(void){
    int toss;
    int head = 0;
    int tail = 0;
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++){
        if(coin_toss() == 1) head ++;
        else tail ++;
    }

    printf("Head: %d\n", head);
    printf("Tail: %d\n", tail);

    return 0;
}

int coin_toss(){
    int i = rand() % 2;
    if(i == 1)
        return 1;
    else
        return 0;
}
