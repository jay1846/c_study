#include <stdio.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main(void){
    int key;
    int grade[SIZE] = {2, 6, 11, 13, 15, 18, 22, 25, 29, 34, 36, 40, 43, 49, 50, 59};

    printf("Enter a number that you want to find: ");
    scanf("%d", &key);
    printf("Result: %d\n", binary_search(grade, SIZE, key));

    return 0;
}

int binary_search(int list[], int n, int key){
    int low, middle, high;
    low = 0;
    high = n-1;

    while (low <= high){
        printf("[%d  %d]\n", low, high);
        middle = (low +  high) / 2;
        if (key == list[middle]){
            return middle;
        }
        else if (key > list[middle]){
            low = middle +1;
        }
        else{
            high = middle -1;
        }
    }

    return -1;
}
