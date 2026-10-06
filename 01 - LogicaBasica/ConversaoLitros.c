#include <stdio.h>

int main(){

    float M, L = 0;

    printf("Digite o valor em metros cubicos: ");
    scanf("%f", &M);

    L = 1000 * M;
    
    printf("O valor em litros e %.2f", L);

    return 0;
}