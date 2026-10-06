#include <stdio.h>

int main(){

    float  s , d;

    printf("Digite o valor total: ");
    scanf("%f", &s);

    d =  s - (s * (10.0 / 100.0 ));

    printf("Valor com desconto: %.2f\n", d);
    printf("Valor de cada parcela: %.2f\n", s / 3);
    printf("Comissao vendedor a vista: %.2f\n", d - (d *(95.0 / 100.0)));
    printf("Comissao vendedor parcelado: %.2f\n", s - (s * (95.0 / 100.0)));

    return 0;
}