#include<stdio.h>

void swap(int n, int arr[n]);

int main(){
    int count=0;
    int n,i,j,arr[count +1];
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        j=n%10;
        arr[i]=j;
        j=n/10;
        count++;
    }
    swap(count, arr[count+1]);
    printf("\n");
    return 0;
}
void swap(int n, int arr[n]){
    int a,b;
    a= arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = a;
    for(b=0; b<=n; b++){
        printf("%d",arr[n]);
    }
}