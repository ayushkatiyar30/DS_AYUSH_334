#include<stdio.h>

void main(){
    int arr[100], n, i, temp;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("The reversed array is:");
    for(i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}