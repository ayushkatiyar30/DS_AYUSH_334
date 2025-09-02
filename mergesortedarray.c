#include<stdio.h>

void main(){
    int arr1[100], arr2[100], merged[200], n, m, i = 0, j = 0, k = 0, p;
    printf("Enter the number of elements in first array:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(p = 0; p < n; p++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array:");
    scanf("%d", &m);

    printf("Enter the elements:");
    for(p = 0; p < m; p++){
        scanf("%d", &arr2[p]);
    }
    
    while(i < n && j < m) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while(i < n) {
        merged[k++] = arr1[i++];
    }

    while(j < m) {
        merged[k++] = arr2[j++];
    }
    printf("The merged sorted array is:");
    for(p = 0; p < k; p++){
        printf("%d ", merged[p]);
    }
}
