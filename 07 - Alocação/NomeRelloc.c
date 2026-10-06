#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, e;

    printf("Digite o tamanho do nome: ");
    scanf("%d", &t);

    char *nome = (char *) malloc(t * sizeof(char));
    if (nome == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    printf("Digite o nome: ");
    for (int i = 0; i < t; i++) {
        scanf(" %c", &nome[i]);
    }

    printf("Nome digitado: %s\n", nome);

    printf("Mudar nome? Sim(1) Nao(2): ");
    scanf("%d", &e);

    switch (e) {
        case 1:
            printf("Digite o novo tamanho do nome: ");
            scanf("%d", &t);
            break;
        default:
            free(nome);
            return 0;
    }

    nome = (char *) realloc(nome, t * sizeof(char));
    if (nome == NULL) {
        printf("Erro de realocacao!\n");
        return 1;
    }

    printf("Digite o nome de novo: ");
    for (int i = 0; i < t; i++) {
        scanf(" %c", &nome[i]);
    }

    printf("Nome final: %s\n", nome);

    free(nome);
    return 0;
}
