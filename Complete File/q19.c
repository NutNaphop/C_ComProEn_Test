#include <stdio.h>
int main(){
    int num , max_x = 0, max_y = 0, x ,y ;
    printf("Enter Number :");
    scanf("%d",&num);
    for (int i = 1 ; i <= num ; i ++){
        printf("Enter Number X :");
        scanf("%d",&x);
        if (x >= max_x){
            max_x = x;
        }
    }
    for (int i = 1 ; i <= num ; i ++){
        printf("Enter Number Y :");
        scanf("%d",&y);
        if (y >= max_y){
            max_y = y;
        }
    }
    printf("Max X = %d\n",max_x);
    printf("Max Y = %d",max_y);
}