#include <stdio.h>
#define PI 3.14 

int main(){

    float R, G = 0;

    printf("Digite o valor em radianos: ");
    scanf("%f", &R);

    G = R * 180 / PI;

    printf("Valor em graus e %.2f", G);

    return 0;
}