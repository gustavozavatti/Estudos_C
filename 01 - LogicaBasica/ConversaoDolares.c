#include <stdio.h>

int main(){

    float r, c, d;

    printf("Digite seu total em reais: ");
    scanf("%f", &r);
    printf("Digite a cotacao do dolar em reais: ");
    scanf("%f", &c);

    d = r / c;

    printf("O valor total em dolares e %.2f", d);

    return 0;
}