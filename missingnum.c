#include <stdio.h>

void main()
{
    int n, i, total, sum = 0;

    printf("Enter n(range 1 to n): ");
    scanf("%d", &n);
    
    int arr[n-1];
    printf("Enter %d numbers (from 1 to %d):\n", n-1, n);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    printf("The missing number is: %d\n", total - sum);

}