/* Calculates a broker's commission */

#include <stdio.h>

int main(void){

	float commission, value;

	printf("Enter value of trade: ");
	scanf("%f",&value);

	if (vlaue < 2500.00f){
	    commission = 30.00f + 0.17f * value;
}
    else (2500.00f < value < 6250.00f){
        commission = 56.00f + .0066f * value;
    
