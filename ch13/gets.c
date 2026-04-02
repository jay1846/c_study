#include <stdio.h>

int main(void){
    char name[100];
    char address[100];

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);                       // char *fgets(char *str, int n, FILE *stream);
    printf("Enter your address: ");                         // str : address of array to save the read string
    fgets(address, sizeof(address), stdin);                 // n : size of array
                                                            // stream : read from where? (normally use **stdin** if it's from keyboard)
    printf("Hello, %s. You live in %s !", name, address);

    return 0;
}

/*
fgets() read specified size (n-1), it doesn't invade memory area. Last box is for '\0'.
ex) enter : jay /  what is store : {'j','a','y','\n','\0'}
*/