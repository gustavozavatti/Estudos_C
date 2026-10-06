#include <stdio.h>
#include <string.h>

struct Livro {
    char nome[50];
    char autor[50];
    int ano;
};

int main() {

    int ql;
    struct Livro livros[100];

    printf("Digite a quantidade de livros para cadastro: ");
    scanf("%d", &ql);
    getchar();

    for (int i = 0; i < ql; i++) {

        printf("\nDigite o nome do livro %d: ", i + 1);
        fgets(livros[i].nome, 50, stdin);
        livros[i].nome[strcspn(livros[i].nome, "\n")] = '\0';

        printf("Digite o autor: ");
        fgets(livros[i].autor, 50, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Digite o ano do livro: ");
        scanf("%d", &livros[i].ano);
        getchar();
    }

    printf("\n====================\n");
    printf("Livros apos o ano 2000:\n");

    for (int i = 0; i < ql; i++) {
        if (livros[i].ano > 2000) {
            printf("\nLivro: %s\n", livros[i].nome);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
        }
    }

    return 0;
}
