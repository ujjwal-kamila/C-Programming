#include<stdio.h>

void main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the first number shited %d\n",a);
    printf("the second number shifted %d\n",b);
}