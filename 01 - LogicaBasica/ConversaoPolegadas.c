#include <stdio.h>

int main(){

    float P, CM = 0;

    printf("Digite as polegadas: ");
    scanf("%f", &P);

    CM = P * 2.54;

    printf("O comprimento em centimetros e %.2f", CM);

    return 0;
}