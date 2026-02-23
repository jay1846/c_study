#include <stdio.h>

int main(void){
    int hour, minute;

    printf("Departure time\t Arrival time\n");
    printf("8:00a.m\t\t  10:16a.m\n");
    printf("9:43a.m\t\t  11:52a.m\n");
    printf("11:19a.m\t   1:31p.m\n");
    printf("12:47a.m\t   3:00p.m\n");
    printf("2:00p.m\t\t  4:08p.m\n");
    printf("3:45p.m\t\t  5:55a.m\n");
    printf("7:00p.m\t\t  9:20p.m\n");
    printf("9:45p.m\t\t  11:58p.m\n");
    printf("Enter a 24-hour time: :");
    scanf("%d:%d",&hour, &minute);

    int input_minutes;
    input_minutes = hour * 60 + minute;

    int d1 = 8 * 60;
    int d2 = 9 * 60 + 43;
    int d3 = 11 * 60 + 19;
    int d4 = 12 * 60 + 47;
    int d5 = 14 * 60;
    int d6 = 15 * 60 + 45;
    int d7 = 19 * 60;
    int d8 = 21 * 60 + 45;

    if(input_minutes < d1 + (d2-d1)/2){
        printf("Closest departure time is 8:00a.m, arriving at 10:16a.m\n");
    }
    else if (input_minutes < d2 + (d3-d2)/2 ){
        printf("Closest departure time is 9:43a.m, arriving at 11:52a.m\n");
    }
    else if (input_minutes < d3 + (d4-d3)/2){
        printf("Closest departure time is 11:19a.m, arriving at 1:31p.m\n");
    }
    else if (input_minutes < d4 + (d5-d4)/2){
        printf("Closest departure time is 12:47a.m, arriving at 3:00p.m\n");
    }
    else if (input_minutes < d5 + (d6-d5)/2){
        printf("Closest departure time is 2:00p.m, arriving at 4:08p.m\n");
    }
    else if (input_minutes < d6 + (d7-d6)/2){
        printf("Closest departure time is 3:45a.m, arriving at 5:55a.m\n");
    }
    else if (input_minutes < d7 + (d8-d7)/2){
        printf("Closest departure time is 7:00p.m, arriving at 9:20p.m\n");
    }
    else {
        printf("Closest departure time is 9:45a.m, arriving at 11:58p.m\n");
    }

    return 0;
}
