#include<stdio.h>

void main() {
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    //number is divisable by 2
    if(number%2==0){
    printf("%d is Even Number", number);}
    else{printf("%d is Odd Number", number);}
}
    