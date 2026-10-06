#include <stdio.h>
#define PI 3.14 

int main(){

    float G, R = 0;

    printf("Digite o valor em graus: ");
    scanf("%f", &G);

    R = G * PI / 180;

    printf("Valor em radianos e %.2f", R);

    return 0;
}