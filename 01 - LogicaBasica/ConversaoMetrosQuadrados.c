#include <stdio.h>

int main(){

    float A, M;

    printf("Digite o valor em metros quadrados: ");
    scanf("%f", &M);

    A = M * 0.000247;

    printf("O valor em areas acres e %.2f", A);

    return 0;
}