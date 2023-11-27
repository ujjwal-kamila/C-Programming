#include<stdio.h>

void main(){
    int a,b;
    printf("read the integer :");
    scanf("%d",&a);
    a<<=2;
    b=a;
    printf("left shift value is:%d\n",b);
}