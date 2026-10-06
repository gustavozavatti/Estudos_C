#include <stdio.h>

int main(){

    float A, M;

    printf("Digite o valor em areas acres: ");
    scanf("%f", &A);

    M = A * 4048.58;

    printf("O valor em metros quadrados e %.2f", M);

    return 0;
}