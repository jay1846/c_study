#include <stdio.h>

int main(void){
    int a = 0;
    int b = 1;
    int c = a + b;
    int input;

    printf("Until how many times adapt fibonacci?: ");
    scanf("%d", &input);

    printf("%d %d",a,b);
    for(int i = 0; i <= input; i++){
        c = a + b;
        printf(" %d", c);

        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
