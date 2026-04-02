#include <stdio.h>

struct student {                    // structure declare and definition
    int number;
    char name[10];
    double grade;
};

int main(void){

    struct student s;               // structure variable declare

    printf("Enter ID: ");
    scanf("%d", &s.number);

    printf("Enter name: ");
    scanf("%s", s.name);            // name is already array, which is already a pointer. no & 

    printf("Enter grade: ");
    scanf("%lf", &s.grade);         

    printf("\nID: %d\n", s.number);
    printf("Name: %s\n", s.name);
    printf("Grade: %.2f\n", s.grade);
    
    return 0;
}