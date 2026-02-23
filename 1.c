#include <stdio.h>

int main(void){
    float number;
    float  max = 0.0f;

    while(1){
        printf("Enter a number: ");
        scanf("%f",&number);
        
        if(number <= 0){
            break;
        }
        max = (number>max)?number:max;
    }
    if (max>0){
        printf("The largest number entered was %.2f\n",max);
    }
    return 0;
}
