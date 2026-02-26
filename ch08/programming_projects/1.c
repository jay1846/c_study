#include <stdio.h>

int main(void){
    int counts[10] = {0};
    int ch, i;

    printf("Enter a number: ");
    
    while ((ch=getchar()) != '\n'){
        if (ch >= '0' && ch <= '9'){
            counts[ch - '0']++; // getchar function gets literal value not the number it self.
                                // if user puts 0, computer recognize it as 48 (ASCII Code)

        }
    }

    printf("Repeated digts(s): ");

    for (i=0; i<10; i++){
        if (counts[i] >= 2){
            printf("%d\n",i);
        }
    }

    return 0;
}
