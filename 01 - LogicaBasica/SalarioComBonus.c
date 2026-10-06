#include <stdio.h>

int main(){

    int h;
    float vh;

    printf("Digite o total de horas trabalhados: ");
    scanf("%d", &h);
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &vh);

    printf("O total liquido somando o bonus e %.2f.", (h * vh + (h *  vh * (10.0 / 100.0))));

    return  0;
}