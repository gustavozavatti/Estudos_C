#include <stdio.h>

int main() {
    float x[5];
    float media = 0, menor = 999999999, maior = 0;
    int omg = 0;

    printf("Digite 5 precos:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &x[i]);
        media += x[i];
    }

    for(int i = 0; i < 5; i++) {
        if(x[i] > maior) maior = x[i];
        if(x[i] < menor) menor = x[i];
        if(x[i] > 120) omg++;
    }

    printf("Maior preco: %.2f\n", maior);
    printf("Menor preco: %.2f\n", menor);
    printf("Media dos precos: %.2f\n", media / 5);
    printf("Quantidade de produtos com preco maior que 120: %d\n", omg);

    return 0;
}