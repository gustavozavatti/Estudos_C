#include <stdio.h>

int main(){

    float l, c, cm;

    printf("Digite o comprimento: ");
    scanf("%f", &c);
    printf("Digite a largura: ");
    scanf("%f", &l);
    printf("Custo do metro quadrado: ");
    scanf("%f", &cm);

    printf("O valor total para cercar e %.2f", ((2 * c + 2 * l) * cm));

    return 0;
}