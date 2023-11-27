#include <stdio.h>

void main() {
    int year;    
    printf("Enter a year: ");
    scanf("%d", &year); 
    if(year%4==0)
    {
        printf("This Year is LeapYear,\n");
    }
    else if(year%400==0)
    {
        printf("This Year is LeapYear,\n");   
    }
    else if(year%100!=0)
    {
        printf("This Year is not LeapYear,\n");
    }
}