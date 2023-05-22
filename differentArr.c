#include <stdio.h>
void main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {scanf("%d", &arr[i]);}
    int diff[n-1];
    for (int i = 0; i < n-1; i++)
    {diff[i] = arr[i] - arr[i+1];}
    printf("Differences between consecutive elements: ");
    for (int i = 0; i < n-1; i++)
    {printf("%d ", diff[i]);}
    int max_diff = diff[0];
    for (int i = 1; i < n-1; i++)
    {if (diff[i] > max_diff)
        {max_diff = diff[i];}
    }
    printf("\nLargest difference between consecutive elements: %d", max_diff);
}
