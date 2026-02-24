#include <stdio.h>

int main(void){
    int income;

    printf("Enter your income: ");
    scanf("%d",&income);

    if ( income < 750 ){
        printf("1% of income: %d", income * 0.01);
    }
    else if (750 <= income && income < 3750){
        printf("$37.50 plus 3% of amount over $2.250: %d", 37.50 + income * 0.02);
    }
}
