
#include <stdio.h>
#include <math.h>

int main() {
    float a , b , c ;
    printf("Enter a , b , c : \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (a <= 100&&b<= 100&&c<=100 ){
        float inroot = (b*b)-(4*a*c);
		
		if (inroot >=0){
		float root = sqrt(inroot);
        float sum = (-b+root)/(2*a);
        printf("%.2f \n",sum);	
		}
		
		else{
			printf("In root Should be More than equal 0 please try again");
		}
    }
    else{
        printf("More Than 100 Please Try Again");
    }
    return 0;
}