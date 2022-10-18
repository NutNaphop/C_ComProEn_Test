#include <stdio.h>
int main(){
	const double pi = 3.14159265358979323846;
	float r, surface = 0 , volume = 0   ;
	double divide = 4;
	divide /= 3 ;
	scanf("%f",&r);
	double face = r*r * pi*4;
	double vol = divide*pi*r*r*r;
	printf("The surface area of sphere is %.2f",face);
	printf("The volume of sphere is %.2f",vol);
return 0 ;
}