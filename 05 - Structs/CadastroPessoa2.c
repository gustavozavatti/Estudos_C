#include <stdio.h>

struct pesssoa{
    char nome[50];
    int idade;
    float altura;
};

int main(){

    struct pesssoa c[3];
    int velha = 0;

    printf("Digite os dados: \n");
    for(int i = 0; i < 3; i++){
        printf("Pessoa %d: \n", i + 1);
        printf("Nome: ");
        scanf("%s", c[i].nome);
        printf("Idade: ");
        scanf("%d", &c[i].idade);
        if(c[i].idade > velha){
            velha = c[i].idade;
        }
        printf("Altura: ");
        scanf("%f", &c[i].altura);
    }

    printf("\nPessoa mais velha: \n");
    for(int i = 0; i < 3; i ++){
        if(c[i].idade == velha){
            printf("Nome: %s\n", c[i].nome);
            printf("Idade: %d\n", c[i].idade);
            printf("Altura: %.2f\n", c[i].altura);
        }
    }

    return 0;
}