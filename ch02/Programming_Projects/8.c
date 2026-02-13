#include <stdio.h>

int main(void){

	float loan,rate,payment;

	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	float monthly_rate = (rate/100)/12;
	float first_payment = loan - payment;
	float second_payment = (first_payment) * (1 + monthly_rate) - payment;
	float third_payment = (second_payment) * (1 + monthly_rate) - payment;

	printf("Balance remaining after first payment: $%.2f\n", first_payment);
	printf("Balance remaining after second payment: $%.2f\n", second_payment);
	printf("Balance remaining after third payment: $%.2f\n", third_payment);

	return 0;
}
