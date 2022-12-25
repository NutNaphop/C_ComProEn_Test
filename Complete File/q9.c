// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    a = getchar();
    if (isdigit(a) != 0) printf("%c is digit",a);
    else if (islower(a) != 0) printf("%c is lowercase",a);
    else if (isupper(a) != 0) printf("%c is uppercase",a);
    else printf("%c is Other",a);
}