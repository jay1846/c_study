#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main(void){
    int a[10];
    int b[10];
    int result;

    printf("Enter 10 Elements at array a: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter 10 Elements at array b: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &b[i]);
    }

    result = array_equal(a, b, 10);
    if(result == 1){
        printf("Both arrays are same\n");
    }
    else{
        printf("Both arrarys are different\n");
    }

    return 0;
}


int array_equal(int a[], int b[], int size){

    for(int i= 0; i < size; i++){
        if(a[i] != b[i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}