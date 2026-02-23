#include <stdio.h>

int main(void){

	int num_front,num_middle,num_end;

	printf("Enter phone number {(xxx) xxx-xxxx} : ");
	scanf("(%d) %d-%d", &num_front,&num_middle,&num_end);
	printf("You entered %d.%d.%d\n", num_front, num_middle, num_end);

	return 0;
}
