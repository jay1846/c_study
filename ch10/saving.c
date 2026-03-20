#include <stdio.h>

void save(int amount){
    static long balance = 0;

    if (amount >= 0){
        printf("%d \t\t\t\t", amount);
    }
    else{
        printf("\t\t%d \t\t", -amount);
    }

    balance += amount;
    printf(" %ld \n", balance);
}

int main(void){
    printf("=======================================\n");
    printf("Deposit \tWithdrawl\t Balance\n");
    printf("=======================================\n");
    save(10000);
    save(50000);
    save(-10000);
    save(30000);
    printf("=======================================\n");
    return 0;
}
