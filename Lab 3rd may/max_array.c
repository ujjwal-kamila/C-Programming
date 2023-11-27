#include <stdio.h>
void main() {
    int arr[5];
    int *ptr = arr;
    int i, max;
      printf("Enter Value in Array:\n");
    for(i=0;i<5;i++)
    {
     scanf("%d",&arr[i]);
    }
    max = *ptr;
    for(i=0; i<5; i++)
    {
        if(*(ptr+i) > max) 
        {
            max = *(ptr+i);
        }
    }
    printf("The maximum number is: %d \n", max);
}



// #include <stdio.h>
// int main()
// {
//     int n, *ptr, max;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter the array elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     max = a[0];
//     ptr = a;
//     for (int i = 0; i < n; i++)
//     {
//         if (*ptr > max)
//         {
//             max = *ptr;
//         }
//         ptr++;
//     }
//     printf("The maximum number in the array is %d\n", max);
//     return 0;
// }