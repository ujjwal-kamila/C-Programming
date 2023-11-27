#include<stdio.h>

int main() {
    float a;
    printf("enter the number :");
    scanf("%f",&a);
    if(a<=30){
        printf("the number is in range 0-30\n");}
    else if(a>=31 && a<=50){
        printf("the number is in range 31-50\n");}
    else if(a>=51 && a<=80){
        printf("the number is in range 51-80\n");}
    else if(a>=80 && a<=100){
        printf("the number is in range 80-100\n");}
    else{
        printf("not a valid number\n");}
return 0;
}