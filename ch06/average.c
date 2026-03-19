#include <stdio.h>

int main(void){
    int grade, n;
    double sum, average;

    n=0;
    sum=0;
    grade=0;

    printf("If you want to end then enter minus\n");

    while (grade >= 0){
        printf("Enter grade: ");
        scanf("%d", &grade);

        sum += grade;
        n++;
    }

    sum = sum - grade;
    n--;

    average = sum / n;
    printf("Average of grade is: %f\n", average);

    return 0;
}
