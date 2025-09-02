#include<stdio.h>

void main(){
    int arr[100], n, i, j, v;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the sorted elements:");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert:");
    scanf("%d", &v);
    
    i = n-1;
    while(i >= 0 && arr[i] > v){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = v;
    n++;

    printf("Array after insertion:");   
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}