#include <stdio.h>

int main(){

    int ano, i;

    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    printf("Digite sua idade: ");
    scanf("%d", &i);

    printf("Seu ano de nascimento e %d!", ano - i);

    return 0;
}