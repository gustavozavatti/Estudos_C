#include <stdio.h>
#include <math.h>

float IMC(float peso, float altura) {
    float imc = peso / pow(altura, 2);
    return imc;
}

int idade(int ano) {
    int idade = 2025 - ano;
    return idade;
}

int main() {
    int ano;
    float p, a;

    printf("Digite seu peso: ");
    scanf("%f", &p);

    printf("Digite sua altura: ");
    scanf("%f", &a);

    printf("Seu IMC e: %.2f\n", IMC(p, a));

    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Sua idade e: %d\n", idade(ano));

    return 0;
}
