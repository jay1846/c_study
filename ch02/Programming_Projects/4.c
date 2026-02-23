#include <stdio.h>

int main(void){
	float amount;

	printf("Enter your amount of money: ");
	scanf("%f",&amount);

	float tax_added = amount * 1.05f;
	printf("This is 5 percent tax added money: %.3f\n", tax_added);

	return 0;
}
