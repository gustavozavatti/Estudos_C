#include <stdio.h>

int main(){

    float C = 0, K;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &K);

    C = K - 273.15;

    printf("A temperatura em Celsius e %.2f", C);

    return 0;
}