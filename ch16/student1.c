#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {                // Declare structure name student
    int number;                 // student structure is defined with 3 member
    char name[10];              // structure variable is not declared yet
    double grade;               // Since structure is declared in file, it can be used in every functions
};

int main(void){
    
    struct student s;           // structure variable s has been declared insdie of function. Initial value is a garbage value

    s.number = 20230001;        // put values in variable's number
    strcpy(s.name, "Jay");      // name = "Jay" is not allowed. must use strcpy() library
    s.grade = 4.3;

    printf("Student ID: %d\n", s.number);
    printf("Name: %s\n", s.name);
    printf("Grade %.2f\n", s.grade);

    return 0;
}