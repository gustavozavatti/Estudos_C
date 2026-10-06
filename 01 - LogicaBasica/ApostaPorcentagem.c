#include <stdio.h>

int main(){

    float a1, a2, a3, t = 0;
    float vp;

    printf("Digite o valor das tres apostas: ");
    scanf("%f %f %f", &a1, &a2, &a3);

    t = a1 + a2 + a3;

    printf("Digite o valor total do premio: ");
    scanf("%f", &vp);

    printf("Aposta 1 ganha: %.2f\n", vp * (a1 / t));
    printf("Aposta 2 ganha: %.2f\n", vp * (a2 / t));
    printf("Aposta 3 ganha: %.2f\n", vp * (a3 / t));
    return 0;
}