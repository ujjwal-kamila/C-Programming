#include<stdio.h>

int swap(int a, int b) {
    int c=a;
    a=b;
    b=c;
    printf("the numbers after swapping is : a=%d\n b=%d",a ,b);
}
void main() {
  int a,b;
  printf("enter two numbers :\n");
  scanf("%d%d",&a,&b);
  swap(a,b);
}