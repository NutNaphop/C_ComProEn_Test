# include <stdio.h>
int main(){

	char get;
	int a,b,c;
	
	printf("Enter Char (A,B,C) : ");
	get = getchar();
	switch (get){
		
		case 'a':{
			scanf("%d",&a);
			printf("Your input : %d",a);
			break;
		}
		case 'b':{
			scanf("%d %d",&a,&b);
			printf("Your input : %d %d",a,b);
			break;
		}
		case 'c':{
			scanf("%d %d %d",&a,&b,&c);
			printf("Your input : %d %d %d",a,b,c);
			break;
		}
	}
	                    
	
		}

						