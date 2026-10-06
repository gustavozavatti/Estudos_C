#include <stdio.h>

int main(){

    float b, h;

    do{
        printf("Digite a altura: ");
        scanf("%f", &h);
        printf("Digite a base: ");
        scanf("%f", &b);
    } while (b < 0 && h < 0);
    printf("Area: %.2f", (b * h) / 2);
    

    return 0;
}