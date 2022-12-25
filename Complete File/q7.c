#include <stdio.h>
int main(){
	int a , b , c  ;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int sum = a+b+c ;
	if (sum == 100){
		printf("\n%d + %d + %d",a,b,c);
		printf("\n%d OK !!!",sum);
	}
	else{
		printf("\n%d",sum);
		printf("\n%d + %d + %d",a,b,c);
	}

return 0 ;
}