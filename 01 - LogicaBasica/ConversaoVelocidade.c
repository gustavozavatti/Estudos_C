#include <stdio.h>

int main(){

    float K, M = 0;

    printf("Digite a velociade em Km/s: ");
    scanf("%f", &K);

    M = K / 3.6;

    printf("A velociade em m/s e %.2f", M);

    return 0;
}