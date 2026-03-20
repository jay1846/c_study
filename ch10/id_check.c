#include <stdio.h>

int id_check();

int main(void){
    int attempts = 0;
    int is_success = 0;
    
    while (attempts < 3){
        if(id_check() == 1){
            printf("Exact password\n");
            is_success = 1;
            break;
        }
        else{
            attempts++;
        }
    }

    if (is_success == 0){
        printf("Too many login attempts\n");
    }

    return 0;
}

int id_check(){
    int x;
    printf("Enter password: ");
    scanf("%d",&x);
    if (x == 1234){
        return 1;
    }
    else
        return 0;
}
