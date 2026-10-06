#include <stdio.h>

int main(){

    float C, F;

    printf("Digite a temperatura em Fahrenheits: ");
    scanf("%f", &F);

    C = 5.0 * (F - 32.0)/9.0;

    printf("A temperatura em Celsius: %.2f", C);

    return 0;
}