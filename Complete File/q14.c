#include <stdio.h>
int main(){
    int n , str ; 
    printf("Input Char : ") , scanf("%c",&str); 
    printf("Input n : ") , scanf("%d" , &n);
    
    for (int i = 1 ; i <= n ; i ++){
        for (int j = 1 ; j <= i ; j++){
            printf("%c",str);
        }
        printf("\n");
    }
}