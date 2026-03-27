#include <stdio.h>

int main(void){

    char src[] = "Action speaks louder than words";

    char dst[100];
    int i;

    printf("Original strings: %s\n", src);
    for(i = 0; src[i] != '\0'; i++){
        dst[i] = src[i];
    }

    dst[i] = '\0';
    printf("Copied strings: %s\n", dst);

    return 0;
}