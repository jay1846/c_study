#include <stdio.h>

int main(void){
    int number,i;
    
    printf("Enter the number: ");
    scanf("%d",&number);
    for(i=2;i<=number;i++){
        if(i % 2 != 0){
            continue;
        }
        printf("%d\n",i*i);
    }
    return 0;
}
