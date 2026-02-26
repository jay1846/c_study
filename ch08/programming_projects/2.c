#include <stdio.h>

int main(void){
    printf("Enter a number: ");

    int ch,i,digit[10]={0};
    while ((ch=getchar()) != '\n'){
        if (ch >= '0' && ch <= '9'){
            digit[ch-'0']++;
        }
    }
    
    printf("Digit:\t    ");
    for (i=0; i<10; i++){
        printf("%3d",i);
    }
    printf("\nOccurrences:");
    for (i=0; i<10; i++){
        printf("%3d",digit[i]);
    }
    printf("\n");

    return 0;
}
