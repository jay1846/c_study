#include <stdio.h>

void selection_sort(int a[], int n);

int main(void){
    int a[100];
    int n;

    printf("Enter a number that you're going to put: ");
    scanf("%d", &n);

    printf("Enter a integers: ");
    for(int i=0; i < n; i++){
        scanf("%d", &a[i]);
}

    selection_sort(a,n);

    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selection_sort(int a[], int n){
    int max_idx = 0;
    int temp;
    if(n<=1) return;

    for(int i=0; i < n; i++){
        if(a[i] > a[max_idx]){
            max_idx=i;
        }
    }

    temp = a[n-1];
    a[n-1]=a[max_idx];
    a[max_idx] = temp;

    selection_sort(a, n-1);
}
