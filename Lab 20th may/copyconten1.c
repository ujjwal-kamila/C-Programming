#include<stdio.h>
void main() {
    fptr1 = fopen("ujjwal.txt", "r");
    FILE *fptr2;
    fptr2 = fopen("sum.txt", "w");
    char ch;
    ch = fgetc(fptr1);
    while(ch!= EOF)
    {
        fprintf(fptr2, "%c", ch);
        ch = fgetc(fptr1);
    }
    printf("File copied successfully.\n");
    fclose(fptr1);
    fclose(fptr2);
}   FILE *fptr1;
 
