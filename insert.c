#include<stdio.h>
 void main(){
    int arr[100],n,i,p,v;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    
    printf("Enter the elemets:");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d", &p);
    printf("Enter the value to insert:");
    scanf("%d", &v);

    for (i = n; i >= p; i--) {
        arr[i] = arr[i - 1];
    }
    arr[p-1] = v;
    n++;
    printf("Array after insertion:");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
 }