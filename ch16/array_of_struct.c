#include <stdio.h>

#define SIZE 3

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct student list[SIZE];
    int i;

    for (i = 0; i < SIZE; i++){
        printf("Enter ID: ");
        scanf("%d", &list[i].number);
        printf("Enter name: ");
        scanf("%s", list[i].name);
        printf("Enter grade: ");
        scanf("%lf", &list[i].grade);
    }

    for (i = 0; i < SIZE; i++){
        printf("Name: %s, Grade: %.2f\n", list[i].name, list[i].grade);
    }

    return 0;
}