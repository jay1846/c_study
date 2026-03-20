#include <stdio.h>

int exponent(int x, int y);

int main(void){
    int base,power;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    printf("%d^%d: %d\n",base,power,exponent(base,power));
    return 0;
}

int exponent(int x, int y){
    if(y <= 0)
        return 1;
    else
        return x*exponent(x,y-1);
}
