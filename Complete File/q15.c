#include <stdio.h>
int main(){
    int num , sum = 0;
    printf("Please input N :");
    scanf("%d",&num);
    printf("Prime : ");
    for (int i = 2; i <= num ; i ++){
        for (int j = 2 ; j <= num  ; j ++){
            if ( i == j ){
                printf("%d",i);
                sum += i;
            }
            else if (i % j == 0 ){
                break;
            }
        }
    }
    printf("\n");
    printf("Summation of Prime is %d",sum);
}