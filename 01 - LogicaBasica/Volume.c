#include <stdio.h>
#define pi 3.141592

int main(){

    float r, h;

    printf("Digite o valor de R: ");
    scanf("%f", &r);
    printf("Digite a altura: ");
    scanf("%f", &h);

    printf("O volume e %.2f.", pi * (r * r) * h);
}