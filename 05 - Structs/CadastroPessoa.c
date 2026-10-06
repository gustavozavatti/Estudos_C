#include <stdio.h>

struct pessoas{
    char nome[10];
    int idade;
    char cep[20];
};

int main(){

    struct pessoas a1;

    printf("--- Cadastro de pessoas ---\n");
    printf("Digite o nome: ");
    scanf("%s", a1.nome);
    printf("Digite a idade: ");
    scanf("%d", &a1.idade);
    printf("Digite o CEP: ");
    scanf("%s", a1.cep);
    printf("\n");

    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("CEP: %s\n", a1.cep);
    return 0;
}
