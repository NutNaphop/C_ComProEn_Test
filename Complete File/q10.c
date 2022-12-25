#include <stdio.h>

int main(){
	float promotion,time,fee;
	printf("Promotion Half price : ");
	scanf("%f",&promotion);
	printf("Your Usage time : ");
	scanf("%f",&time);
	if(promotion == 400) {
		fee = ((time*1.50)-400+200);
		if (fee <= 400) fee = 200;	
	}
	else if (promotion == 800) {
		fee = ((time*1.50)-80);	
		if (fee <= 800) fee = 400;
	}
	else if (promotion == 1200) {
		fee = ((time*1.50)-1200+600);
		if (fee <= 1200) fee = 600;
	}
	printf("Fee: %.2f bath",fee);
}