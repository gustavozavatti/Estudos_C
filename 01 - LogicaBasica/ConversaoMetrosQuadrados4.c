#include <stdio.h>

int main(){

    float H, M;

    printf("Digite o valor em hectares: ");
    scanf("%f", &H);

    M = H * 10000;

    printf("A area em metros quadrados e %.2f", M);

    return 0;
}