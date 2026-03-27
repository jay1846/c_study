#include <stdio.h>

int main(void){
    int a[3];

    for(int i = 0; i < 3; i++){
        printf("Enter value for array: ");
        scanf("%d", &a[i]);
    }

    printf("==================\n");
    printf("address\t\tvalue\n");
    printf("==================\n");
    for(int i = 0; i < 3; i++){
        printf("%p  %d\n", a+i, *(a+i));
    }

    return 0;
}