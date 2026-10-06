#include <stdio.h>

int main(){

    float td, h;

    printf("Digite a altura que quer chegar: ");
    scanf("%f", &h);
    printf("Digite o tamanho de cada degrau: ");
    scanf("%f", &td);

    printf("Voce devera subir %.0f degaus!", h / td);

    return 0;
}