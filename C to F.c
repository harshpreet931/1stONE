#include <stdio.h>

void main(){
    int c;
    float f;

    printf("Enter the temperature in C:");
    scanf("%d",&c);

    f = ((c*(9/5))+32);

    printf("The temp in F is: %.2f",f);

}
