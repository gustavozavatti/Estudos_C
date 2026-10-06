#include <stdio.h>

int main(){

    float K = 0 , M;

    printf("Digite a ditancia em milhas: ");
    scanf("%f", &M);

    K = 1.61 * M;

    printf("A distancia em kilometros e %.2f", K);

    return 0;
}