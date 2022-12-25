#include <stdio.h>
int main(){
    int score ; 
    int std_score[6]= {} ;
    printf("Input\n");
    printf("Enter Score 6 Student\n");
    for (int i = 1 ; i <= 6 ; i ++){
        printf("Student #%d score : ",i);
        scanf("%d",&score);
        std_score[i-1] = score ;
    }
    printf("Output\n");
    printf("ID | Score\n");
    printf("-----------------------------\n");
    for (int i = 1 ; i<= 6 ; i ++){
        printf("%d|",i);
        for (int j = 1 ; j <= std_score[i-1] ; j ++){
            printf("*");
        }
        printf("(%d)\n",std_score[i-1]);
    }
}