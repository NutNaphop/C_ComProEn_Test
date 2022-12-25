#include <stdio.h>
int main(){
    char type ;
    float income , tax; 
    printf("Enter Personal(P) or Company(C) : ");
    type = getchar();
    printf("Enter Money (Year) : ");
    scanf("%f",&income);
    switch (type)
    {
    case 'C':
        if (0 <= income && income <= 3000000){
            tax = income * 0.15 ;
        }
        else ; tax = income  * 0.30;
        break;
    case 'P':
        if (0 <= income && income <=150000){
            tax = income;
        }
        else if (150001 <= income && income<= 300000){
            tax = income * 0.05 ;
        }
        else if (300001 <= income && income<= 500000){
            tax = income *0.1 ;
        }
        else{
            tax = income * 0.15;
        }
        break;
    default:
    printf("Can not Find This Mode");
        break;
    }
    printf("TAX : %.2f THB",tax);
}