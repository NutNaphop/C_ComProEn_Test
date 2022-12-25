#include <stdio.h>

int ls_num [10] = {};
int num,odd,sum_odd; 
int main(){
    for (int i = 1 ; i <= 10 ; i++){
        printf("Enter Number #%d :",i);
        scanf("%d",&num);
        ls_num[i-1] = num ;
    }
    for (int i = 0 ; i <10 ; i ++){
        if (ls_num[i] % 2 != 0){
            odd ++ ; 
            sum_odd+= ls_num[i] ;
        }
    }
    printf("The number of ODD numbers = %d\n",odd);
    printf("Sum of ODD numbers = %d",sum_odd);
}