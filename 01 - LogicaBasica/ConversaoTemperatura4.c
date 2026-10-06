#include <stdio.h>

int main(){

    float C, K = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;

    printf("A temperatura em Kelvin e %.2f", K);

    return 0;
}