#include <stdio.h>

int main(void){
    int m1,d1,y1;
    int m2,d2,y2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&m1,&d1,&y1);
    printf("Enter second date (mm/dd/yy)");
    scanf("%d/%d/%d", &m2,&d2,&y2);

    int first_value = (y1*10000) + (m1*100) + d1;
    int second_value = (y2*10000) + (m2*100) + d2;

    if (first_value<second_value){
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", m1,d1,y1,m2,d2,y2);
    }
    else
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", m2,d2,y2,m1,d1,y1);
}
