#include <stdio.h>

int main(){
	int a,b ; 
	scanf("%d",&a);
	scanf("%d",&b);
	float sum = a/b;
	int r = a % b ;
	printf("Quotient of %d / %d is %.2f and remainder is %d ",a,b,sum,r);
return 0 ;
}