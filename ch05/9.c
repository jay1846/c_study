#include <stdio.h>

int main(void){
    int numerical_grade;

    printf("Enter numerical grade: ");
    scanf("%d",&numerical_grade);

    int tens = numerical_grade /10;

    switch(tens){
        case 10:
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        default:
            printf("Letter grade: F\n");
    }
    return 0;
}
