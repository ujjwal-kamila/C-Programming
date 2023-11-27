#include<stdio.h>
#include<string.h>

    void main()
    {
        int len,i;
        char string[1000];
        printf("Enter a string :- ");
        scanf("%s",string);
        len = strlen(string);
        printf("Here is the input's Reverse value : ");
        for(i=len-1;i>=0;i--)
        {
            printf("%c",string[i]);
        }

        printf("\n");
        printf("\n")
    }



    