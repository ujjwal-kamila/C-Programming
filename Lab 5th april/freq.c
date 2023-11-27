#include <stdio.h>

// Frequency of each digit 

void main() {
   int num,dig,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    int freq[10]={0};
    while(num!=0) {
        dig=num%10;
        freq[dig]++;
        num=num/10;
    }
    printf("Frequency of each digit :- \n");
    for(i=0; i<10; i++) {
        if(freq[i]!=0) {

            printf("%d: %d\n",i,freq[i]);
        }
    }


}

