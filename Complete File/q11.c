#include <stdio.h>
int main(){
    int num , i , count = 1; 
    printf("Enter N :");
    scanf("%d",&num);
    printf("Output : 1 ");
    for (i = 2 ; i<=num ; i ++){
        if ( num % i == 0){
            printf("%d ",i);
            count ++ ;
        }
        else {
            continue;
        }
    } 
    printf("\n");
    printf("Count : %d",count);

}