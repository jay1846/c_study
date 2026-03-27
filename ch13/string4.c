// Count length of string
#include <stdio.h>

int main(void){
    char str[30] = "C language is easy";
    char *p = str;

    while(*p){
        p++;
    }
    printf("length of string %ld\n", p-str);

    return 0;
}