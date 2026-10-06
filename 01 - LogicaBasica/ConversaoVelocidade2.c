#include <stdio.h>

int main(){

    float K = 0, M;

    printf("Digite a velociade em m/s: ");
    scanf("%f", &M);

    K = M * 3.6;

    printf("A velociade em Km/s e %.2f", K);

    return 0;
}