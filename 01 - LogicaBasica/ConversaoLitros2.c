#include <stdio.h>

int main(){

    float L, M = 0;

    printf("Digite o valor em litros: ");
    scanf("%f", &L);

    M = L / 1000;
    
    printf("O valor em metros cubicos e %.2f", M);

    return 0;
}