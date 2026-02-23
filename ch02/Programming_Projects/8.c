// Using less variables

#include <stdio.h>

int main(void){

	float loan,rate,payment;

	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	float monthly_rate = (rate/100.f)/12.0f; //f at the end. if i decided to use float then its better to represent the value with floating point

	// first month
	loan = loan + (loan * monthly_rate) - payment;
	printf("Balance remaining after first payment: $%.2f\n", loan);

	// reflecting the value from first loan
	loan = loan + (loan * monthly_rate) - payment;
	printf("Balance remaining after second payment: $%.2f\n", loan);

	// reflecting the vlaue from second loan
	loan = loan + (loan * monthly_rate) - payment;
	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}
