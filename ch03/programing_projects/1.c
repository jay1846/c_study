#include <stdio.h>

int main(void){
	int month, day, year;

	printf("Enter a date (mm/dd/yyyy): ");

	// between %d / has to be put because user is going to be put /
	scanf("%d/%d/%d",&month,&day,&year);

	// %02d adds 0 when the number is less than 10
	// 0 : when blank then fill with 0
	// 2 : at least prepare two plaes
	printf("You entered the date: %d%02d%02d\n",year,month,day);

	return 0;
}
