#include <stdio.h>

int main(){

    float CM, P = 0;

    printf("Digite as centimetros: ");
    scanf("%f", &CM);

    P = CM / 2.54;

    printf("O comprimento em polegadas e %.2f", P);

    return 0;
}