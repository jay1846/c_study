#include <stdio.h>

void print_binary(int x);

int main(void){
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("This is a binary number: ");
    print_binary(number);
    printf("\n");
    return 0;
}

void print_binary(int x){
    if (x >0){
        print_binary(x / 2);
        printf("%d", x%2);
    }
}
