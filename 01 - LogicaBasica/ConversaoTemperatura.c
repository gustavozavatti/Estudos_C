#include <stdio.h>

int main(){

    float C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * (9.0/5.0) + 32.0;

    printf("A temperatura em Fahrenheit e: %.2f", F);

    return 0;
}