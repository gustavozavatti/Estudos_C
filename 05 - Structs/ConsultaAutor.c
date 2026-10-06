#include <stdio.h>
#include <string.h>

    struct Livro{
        char nome[50];
        char autor[50]; 
        int ano;
    };

int main()
{
    int ql;
    char at[50];
    struct Livro livros[100];
    
    printf("Digite a quantidade de livros para cadastro: ");
    scanf("%d", &ql);
    
    for(int i = 0; i < ql; i++){
        printf("Digite o nome do livro %d: ", i + 1);
        scanf("%s", livros[i].nome);
        printf("Digite o nome do autor: ");
        scanf("%s", livros[i].autor);
        printf("Digite o ano do livro: ");
        scanf("%d", &livros[i].ano);
    }
    
    printf("Nome do autor: ");
    scanf("%s", at);
    
    printf("==================================\n");
    printf("Autor pesquisado: \n");
    
    for(int i = 0; i < ql; i++){
        if(strcmp(at, livros[i].autor) == 0){
        printf("Livro %d: %s\n", i + 1, livros[i].nome);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n",livros[i].ano);
        }
    }
    
    
    return 0;
}