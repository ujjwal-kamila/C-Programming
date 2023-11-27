#include<stdio.h>
#include<math.h>
int main(){
    int n,p,q=0,l,sum=0,r;
    printf("Enter the number : ");
    scanf("%d",&n);
    p=n;
    l=n;
    while(l!=0){
        q++;
        l=l/10;
    }
    while(n>0){
        r=n%10;
        sum+=pow(r,q);
        n=n/10;
    }
    if(p==sum)
        printf("amstrong number");
    else
        printf("not amstrong number");
    return 0;
}