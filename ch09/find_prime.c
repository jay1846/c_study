#include <stdio.h>

int get_integer(void){
    int n;

    printf("Enter integer: ");
    scanf("%d",&n);
    return n;
}

int is_prime(int n){
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int n, result;
    n = get_integer();

    if (is_prime(n) == 1){
        printf("%d is Prime number!\n",n);
    }
    else{
        printf("%d is not a Prime number!\n", n);
    }

    return 0;
}
