#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p = malloc(2 * sizeof(int));           // 2 continuous memory place would be assigned
                                                /*int *p1 = malloc(sizeof(int));
                                                  int *p2 = malloc(sizeof(int));     -> in this case it could be seperate*/
    if (p != NULL){
        *p = 99;
        *(p+1) = 100;
        printf("Allokation erfolgreich");
    }
    else{
        printf("Kein virtueller RAM mehr verfuegbar");
        return EXIT_FAILURE;                     // same expression as return 1
    }

    printf("%d %d\n", p[0], p[1]);
    printf("%d %d\n", *p, *(p+1));
    printf("%p %p\n", p, p+1);                  // we can see address number difference 4
    return 0;
}