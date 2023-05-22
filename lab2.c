#include<stdio.h>

void main(){
    int i;
    printf("enter a number: ");
    scanf("%d",&i);
    while (i != 0)
    {if(i<=0)
      {break;}
      else{
          printf("enter a number: ");
          scanf("%d",&i);
      }
    }
    printf("last entered number is negative or zero %d\n",i);
}