#include <stdio.h>

int main(){

    float K, M = 0;

    printf("Digite a ditancia em Kilometros: ");
    scanf("%f", &K);

    M = K / 1.61;

    printf("A distancia em milhas e %.2f", M);

    return 0;
}