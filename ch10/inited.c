#include <stdio.h>

void init();

int main(void){
    init();
    init();
    init();
    return 0;
}

void init(){
    static int inited = 0;
    if (inited == 0){
        printf("init(): Initializing Network\n");
        inited++;
    }
    else{
        printf("init(): Network already initialized\n");
    }
}
