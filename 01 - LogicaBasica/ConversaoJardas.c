#include <stdio.h>

int main(){

    float J, M;

    printf("Digite o valor em jardas: ");
    scanf("%f", &J);

    M = 0.91 * J;

    printf("O valor em metros e %.2f", M);

    return 0;
}