#include <stdio.h>

void printOptions(){
    printf(" 'c' Celcius to Fahrenheit\n");
    printf(" 'f' Fahrenheit to Celcius\n");
    printf(" 'q' Quit\n");
}

double C_F(double c_temp){
    return 9.0 / 5.0 * c_temp + 32;
}

double F_C(double f_temp){
    return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void){
    double temp;
    char choice;

    while(1){
        printOptions();
        printf("Select type: ");
        choice = getchar();

        if (choice == 'c'){
            printf("Enter Celcius degree: ");
            scanf("%lf", &temp);
            printf("Fahrenheit: %lf\n", C_F(temp));
        }
        else if (choice == 'f'){
            printf("Enter Fahrenheit degree: ");
            scanf("%lf", &temp);
            printf("Celcius: %lf\n", F_C(temp));
        }
        else{
            break;
        }
        getchar();
    }

    return 0;
}
