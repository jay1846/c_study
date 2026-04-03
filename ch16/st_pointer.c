#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;       // pointer is a member of struct
};

int main(void){
    struct date d = {3, 20, 2000};
    struct student s = {1, "Kim", 4.3};

    s.dob = &d;

    printf("ID: %d\n", s.number);
    printf("Name: %s\n", s.name);
    printf("Grade: %.2f\n", s.grade);
    printf("Birthday: %d.%d.%d\n",s.dob->year, s.dob->month, s.dob->day);

    return 0;

}