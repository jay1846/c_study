#include <stdio.h>
#include <stdlib.h>

int main(void){
    int initial_money = 50;
    int goal = 250;
    int i;
    int wins = 0;

    for (i = 0; i < 100; i++){
        int cash = initial_money;
        while (cash > 0 && cash < 250){
            if (((double)rand() / RAND_MAX) < 0.5)
                cash ++;
            else
                cash --;
        }
        if (cash == goal)
            wins ++;
    }
    printf("Initial money: $%d\n", initial_money);
    printf("Goal money: $%d\n", goal);
    printf("In 100 times you succeed: %d\n", wins);
    return 0;
}
