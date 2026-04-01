// getchar ()
#include <stdio.h>

int main(void){

    int ch;                             // return value is integer!
    while((ch = getchar()) != EOF){     // insert letter in a variable which we get from keyboard
        putchar(ch);                    // if the letter is not EOF print on screen by using putchar()
    }                                   // in console ctrl+z is equal as EOF
    return 0;
}

/*
getchar() is using buffer !
when user enter letter, these doesn't go directly to program but go to store place named buffer.
when Enter pressed then the letters which in buffer stored goes in to program.
*/