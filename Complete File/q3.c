#include <stdio.h>
#include <math.h>

int main(){
	int distance,angle ; 
	scanf("%d",&distance);
	scanf("%d",&angle);
	if (5 <= distance <= 1000 && 15 <=angle <= 75){
	int anglesum = tan(angle);
	float sum = anglesum * distance	;
	printf("%f",sum);
	}
return 0 ;
}