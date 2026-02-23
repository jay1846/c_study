#include <stdio.h>

int main(void){
	int p1_1,p1_2,p1_3,p1_4,p2_1,p2_2,p2_3,p2_4,p3_1,p3_2,p3_3,p3_4,p4_1,p4_2,p4_3,p4_4;

	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &p1_1,&p1_2,&p1_3,&p1_4,
&p2_1,&p2_2,&p2_3,&p2_4,&p3_1,&p3_2,&p3_3,&p3_4,&p4_1,&p4_2,&p4_3,&p4_4);

	printf("%3d %3d %3d %3d\n%3d %3d %3d %3d\n%3d %3d %3d %3d\n%3d %3d %3d %3d\n",p1_1,p1_2,p1_3,p1_4,p2_1,p2_2,p2_3,p2_4,p3_1,p3_2,p3_3,p3_4,p4_1,p4_2,p4_3,p4_4);

	printf("Row sums: %d %d %d %d\n", p1_1+p1_2+p1_3+p1_4, p2_1+p2_2+p2_3+p2_4, p3_1+p3_2+p3_3+p3_4, p4_1+p4_2+p4_3+p4_4);
	printf("Colum sums: %d %d %d %d\n", p1_1+p2_1+p3_1+p4_1, p1_2+p2_2+p3_2+p4_2, p1_3+p2_3+p3_3+p4_3, p1_4+p2_4+p3_4+p4_4);
	printf("Diagonal sums: %d %d\n", p1_1+p2_2+p3_3+p4_4, p1_4+p2_3+p3_2+p4_1);

	return 0;
}
