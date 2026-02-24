#include <stdio.h>

int main(void){
    int days_number;
    int starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days_number);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    int i,d;

    // Before day start make 3 blanks
    for(i=1; i<starting_day; i++){
        printf("   ");
    }
    
    //print days
    for (d=1; d<=days_number; d++){
        printf("%3d",d);

        if ((starting_day + d - 1) % 7 == 0){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
