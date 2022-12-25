#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a[30];
    int all = 0 , upper = 0 ;
    printf("Enter String : ");
    gets(a);
    for (int i = 0 ; i < strlen(a) ; i ++){
        if (isalpha(a[i])){
            if (isupper(a[i])){
                upper ++;
            }
            all ++;
        }
        else if (isspace(a[i])){
            all ++;
        }
    }
    printf("The Number of all character  is %d \n",all);
    printf("The Number of upper character  is %d",upper);
}