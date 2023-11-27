#include<stdio.h>
#include<stdlib.h>
void main() {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    ptr[0]= 1;
    ptr[1] = 22;
    ptr[2] = 45;
    ptr[3] = 28;
    ptr[4] = 96;
    for(int i =0; i<5; i++)
    {
        printf("%d\n",ptr[i]);
    }
}