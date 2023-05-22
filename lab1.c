#include<stdio.h>

//C program to reverse a number sample input 1234 & sample output 4321

void main() {
    int n,reminder;
    printf("Enter any Number: ");
    scanf("%d",&n);

    while(n!=0){
        reminder=n%10;
        printf("%d",reminder);
        n=n/10;
    }
}