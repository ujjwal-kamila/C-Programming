#include<stdio.h>
void swap(int *a,int *b);
void main() {
	int a,b;
	printf("Enter two integers : ");
	scanf("%d\n%d",&a,&b);
	swap(&a,&b);
	printf("After swapping the integers is : a = %d\n b= %d ",a,b);
     }
     
    void swap(int *x,int *y) 
    {
    int z;
    z = *x;
    *x = *y;
    *y = z; 
    }
