#include <stdio.h>

int main(void){

	int digit;

	printf("Enter a three-digit number: ");
	scanf("%d",&digit);

	int first_digit = digit / 100;
	int second_digit = (digit % 100)/10;
	int third_digit = digit % 10;

	printf("The reversal is: %d%d%d\n", third_digit,second_digit,first_digit);

	return 0;
}
