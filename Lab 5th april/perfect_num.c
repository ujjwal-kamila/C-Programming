#include<stdio.h>
// C program to print Perfect numbers between 1 & n 
void main() {
    int n,i,j,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Perfect number between 1 & %d are:-",n);
    for(i=1; i<=n; i++)
    {
        sum=0;
        for(j=1; j<=i/2; j++)
        {
            if(i%j==0){
                sum+=j;
            }
            
        }  if(sum==i)
        {
         printf("%d\n",i);

        }
    }
}