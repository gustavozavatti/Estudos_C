#include <stdio.h>

int main(){

    float v;

    printf("Digite o valor do produto: ");
    scanf("%f", &v);

    printf("O valor com desconto e %.2f", v - (v * (12.0 / 100.0)));

    return 0;
}