#include <stdio.h>

struct pessoas{
    char nome[10];
    char matricula[10];
    char curso[20];
};

int main(){

    struct pessoas a1[5];

    printf("--- Cadastro de pessoas ---\n");

    for(int i = 0; i < 5; i++){
        printf("Aluno %d: \n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", a1[i].nome);
        printf("Digite a matricula: ");
        scanf("%s", a1[i].matricula);
        printf("Digite o curso: ");
        scanf("%s", a1[i].curso);
        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        printf("Aluno %d: \n", i + 1);
        printf("Digite o nome: %s\n", a1[i].nome);
        printf("Digite a matricula: %s\n", a1[i].matricula);
        printf("Digite o curso: %s\n", a1[i].curso);
        printf("\n");
    }

    
    return 0;
}
