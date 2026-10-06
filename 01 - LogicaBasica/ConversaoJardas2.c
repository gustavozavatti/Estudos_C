#include <stdio.h>

int main(){

    float J, M;

    printf("Digite o valor em metros: ");
    scanf("%f", &M);

    J = M / 0.91;

    printf("O valor em jardas e %.2f", J);

    return 0;
}