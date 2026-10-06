#include <stdio.h>

int main(){

    float s;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &s);

    printf("O salario com aumento e %.2f!", s + (s * (25.0 / 100.0)));

    return 0;
}