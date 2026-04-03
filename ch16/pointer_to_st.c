// Reference struct by using pointer

#include <stdio.h>

struct student{
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct student s = {1, "Hong", 4.3};
    struct student *p;
    p = &s;

    printf("ID = %d Name = %s Grade %.2f \n", s.number, s.name, s.grade);
    printf("ID = %d Name = %s Grade %.2f \n", (*p).number, (*p).name, (*p).grade);          // reference member of variable s by using pointer. (*p) is same as s.
    printf("ID = %d Name = %s Grade %.2f \n", p->number, p->name, p->grade);                // reference member of variable s py using pointer but this time -> operator.

    return 0;
}