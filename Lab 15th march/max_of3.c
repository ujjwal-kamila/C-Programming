#include<stdio.h>

int main(){
int a,b,c;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("enter the third number:");
scanf("%d",&c);
if(a>b && a>c){
printf("maximum number is %d\n",a);
}
else if(b>a && b>c){
printf("maximum number is %d\n",b);
}
else{
printf("maximum number is %d\n",c);
}
return 0;
}