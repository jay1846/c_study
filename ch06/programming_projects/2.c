#include <stdio.h>

int main(void){
    int n1,n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    int big, small,remainder;

    if(n1==0 || n2 == 0){
        printf("Error: please enter non-zero integars.\n");
        return 0;
    }

    if(n1>n2){
        big = n1;
        small = n2;
    }
    else if (n1<n2){
        big = n2;
        small = n1;
    }
    else{
        big = n2;
        small = n1;
        big = small;
    }

    while(small != 0){
        remainder = big % small;
        big = small;
        small = remainder;
    }

    printf("Greatest common divisor: %d\n", big);

    return 0;
}
