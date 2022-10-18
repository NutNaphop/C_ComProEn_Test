#include <stdio.h>

int main(){
	int c ; 
	float divide = 9;
	divide/=5;
	scanf("%d",&c);
	float faren = divide*c+32;
	printf("%d degrees Celsius is equivalent to %.1f degrees Fahrenheit",c,faren);
return 0 ;
}