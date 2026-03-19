#include <stdio.h>

int factorial(int n){
    long result = 1;

    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int main(void){
    int n;
    printf("Which factorial you want to know?: ");
    scanf("%d", &n);
    printf("Value of %d! is %d\n", n, factorial(n));
    return 0;
}
