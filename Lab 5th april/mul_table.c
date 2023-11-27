/**
 * C program to print multiplication table of a number
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input a number to print table */
    printf("Enter number to print table: ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    } 

    return 0;
}


// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter an integer: ");
//   scanf("%d", &n);

//   for (int i = 1; i <= 10; ++i) {
//     printf("%d * %d = %d \n",n,i, n * i);
//   }
//   return 0;
// }
