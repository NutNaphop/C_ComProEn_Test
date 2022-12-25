#include <stdio.h>
int main(){
    int a,b,c,count = 0;
    
    printf("Input A = ");
    scanf("%d",&a);
    printf("Input B = ");
    scanf("%d",&b);
    printf("Input C = ");
    scanf("%d",&c);
        for (int i = a ; i < b ; i++){
        
        if ( i % c == 0){
            printf("%d ",i) ;
            count ++ ;
        } 
    }
    printf("\nOutput : There is %d number divisible by %d",count,c);
    

}