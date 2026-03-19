#include <stdio.h>

int main(void){
    int hours = 1;
    unsigned int repeated_hours;
    unsigned int bacteria;

    printf("Enter repeated hours: ");
    scanf("%d", &repeated_hours);
    printf("Enter how much bacteria you want to put: ");
    scanf("%u", &bacteria);

    while (hours <= repeated_hours){
        bacteria = bacteria * 4;
        printf("%d hour later: %u\n", hours, bacteria);
        hours ++;
    }

    return 0;
}
