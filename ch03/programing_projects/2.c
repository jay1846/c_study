#include <stdio.h>

int main(void){
	int item;
	float price;
	int month,date,year;

	printf("Enter item number: ");
	scanf("%d",&item);
	printf("Enter unit price: ");
	scanf("%f",&price);
	printf("Enter purchase date (mm/dd/yyyy) ");
	scanf("%d/%d/%d",&month,&date,&year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");

	// %-d left-justified
	// 9999.99 7 characters with dollar symbol and blank 9 place is enough to hold value
	printf("%-d\t\t$%9.2f\t%02d/%02d/%d\n", item,price,month,date,year);

	return 0;
}
