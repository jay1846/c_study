#include <stdio.h>

int main(void){

	int digit;
	printf("Enter a two-digit number: ");
	scanf("%d",&digit);

	int first_digit = digit / 10;
	int second_digit = digit % 10;

	printf("The reversal is : %d%d\n", second_digit, first_digit);

	return 0;
}

