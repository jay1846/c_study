#include <stdio.h>

int main(void){
	int amount;

	printf("Enter entire money : ");
	scanf("%d", &amount);

	int bills_20 = amount/20;
	int bills_10 = (amount%20)/10;
	int bills_5 = amount%20%10/5;
	int bills_1 = amount%20%10%5;

	printf("$20 bills : %d\n", bills_20);
	printf("$10 bills : %d\n", bills_10);
	printf("$5 bills : %d\n", bills_5);
	printf("$1 bills : %d\n", bills_1);

	return 0;
}
