#include<stdio.h>

int main(){
    int n,p,sum=0,r;
    printf("Enter the number :");
    scanf("%d",&n);
    p=n;
    while(n>0){
        r=n%10;
        sum+=(r*r*r);
        n=n/10;
    }
    if(p==sum)
        printf("amstrong number");
    else
        printf("not amstrong number");
        return 0;
}