#include<stdio.h>
int fact(int n);
void main() {
    int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Factorial is : %d\n",fact(n));
}

int fact(int n){
	if(n == 1||n== 0){
		return 1;
	}
	int factNm1 = fact(n-1);
	int factN = factNm1*n;
	return factN;
}
