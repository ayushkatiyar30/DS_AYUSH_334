#include <stdio.h>

void main(){
    int arr[100], n, i, j;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("The repeated element is: %d\n", arr[i]);
              return;
            }
        }
    }
    printf("No repeated elements found.\n");
}