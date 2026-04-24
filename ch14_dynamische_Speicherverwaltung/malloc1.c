#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;                                         // declare pointer variable

    p = malloc(sizeof(int));                        // eine Anfangsadresse eines Speicherbereichs der Größe int zugewiesen
    if(p != NULL){                                  // if it succeed
        *p = 99;
        printf("Allokationerfolgreich ...\n");
    }
    else{                                           // if there's no enough memory place to assign
        printf("Kein virtueller RAM mehr verfuegbar ...\n");
        return 0;
    }
    return 0;   
}