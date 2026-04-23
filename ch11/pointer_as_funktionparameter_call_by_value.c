/*Call-by-value
The disadvantage of this method is that, each time the function is called, all the
parameters must first be copied so that these variables are then
available to the function as local variables */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592f

float kreisflaeche(float wert);

int main(void){
    float radius, flaeche;

    printf("Berechnung einer Kreislfaeche\n");
    printf("Bitte den Radius eingeben: ");
    scanf("%f", &radius);
    flaeche = kreisflaeche(radius);
    printf("\nDie Kreislfache betraegt: %f\n", flaeche);
    return 0;
}

float kreisflaeche(float wert){
    return (wert = wert * wert * PI);
}