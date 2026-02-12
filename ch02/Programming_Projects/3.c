#include <stdio.h>
#define pi 3.141592

int main(void){

        int r;
	float volume;

        printf("Please enter the radius : ");
        scanf("%d", &r);

	volume = 4.0f/3.0f * pi * r * r * r;

        printf("Volume is : %f\n", volume);

        return 0;
}
