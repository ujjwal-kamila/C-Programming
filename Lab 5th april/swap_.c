#include <stdio.h>
//swap first digit & last digit  
void main() {
    int num,first,last,temp,place=1;
    printf("Enter an integer : ");
    scanf("%d",&num);
    last=num%10;
    temp=num;
    while (temp>9) 
    {
        temp/=10;
        place*=10;
    }
    first=temp;
    num=last * place+ num%place;
    num=num/10*10+first;
    printf("The number after swapping first number & last digit is :- %d",num);       
}