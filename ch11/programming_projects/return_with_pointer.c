#include <stdio.h>

void get_two_int(int *px, int *py);

int main(void){
    int x,y;
    int *px = &x;
    int *py = &y;
    get_two_int(&x, &y);                // get_two_int(*px, *py); <- false! convey values not address
                                        // get_two_int(int *px, int *py) <- we promise to get a pointer as a parameter

    return 0;
}

void get_two_int(int *px, int *py){
    printf("Enter two integer: ");
    scanf("%d %d", px, py);             // scanf function wants addresses. *px, *py calls values
    printf("Sum: %d\n", *px + *py);
}