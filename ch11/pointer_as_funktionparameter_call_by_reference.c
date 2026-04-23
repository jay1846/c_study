/*Passing addresses as arguments to a function is known as call-by-reference.*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592f

void kreisflaeche(float *wert);

int main(void){
    float radius;

    printf("Berechnung einer Kreisflaeche\n");
    printf("Bitte den Radius eingeben: ");
    scanf("%f", &radius);

    kreisflaeche(&radius);
    printf("\nDie Kreisflaeche betraegt: %f\n", radius);
    return 0;
}

void kreisflaeche(float *wert){
    *wert = ( (*wert) * (*wert) * PI);
}