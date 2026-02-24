#include <stdio.h>

int main(void){
    int year1, month1, date1;
    int year2, month2, date2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &date1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &date2, &year2);

    if(year1<year2){
        printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month1,date1,year1,month2,date2,year2);
    }
    else if (year1 == year2){
        if(month1<month2){
            printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month1,date1,year1,month2,date2,year2);
        }
        else if (month1>month2){
                printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month2,date2,year2,month1,date1,year1);
         }
        else{
            if (date1<date2){
                printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month1,date1,year1,month2,date2,year2);
            }
            else{
                printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month2,date2,year2,month1,date1,year1);
            }
        }

    }
    else
        printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month2,date2,year2,month1,date1,year1);
    return 0;
}
