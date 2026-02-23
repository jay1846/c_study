// Horner's Rule

#include <stdio.h>

int main(void){
	float x;

	printf("Enter vlaue: ");
	scanf("%f",&x);

	float value = ((((3*x +2)*x-5)*x-1)*x+7)*x-6;

	printf("Total vlaue: %f\n", value);

	return 0;
}
