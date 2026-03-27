#include <stdio.h>

int main(void){
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = &a[9];
    printf("A[] = ");
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("A[] = ");
    for(int i = 0; i < 10; i++){
        printf("%d ", *p--);
    }

    return 0;
}