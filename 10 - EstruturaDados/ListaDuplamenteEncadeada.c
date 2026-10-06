#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
    printf("1) Inserir música no início!\n");
    printf("2) Inserir música no final!\n");
    printf("3) Remover música!\n");
    printf("4) Exibir playlist(inicio -> fim)!\n");
    printf("5) Exibir playlist(fim -> inicio)!\n");
    printf("0) Sair!\n");
}

typedef struct No{
    char musica[100];
    struct No *anterior;
    struct No *proximo;
}No;

typedef struct Lista{
    No *inicio;
    No *fim;
}Lista;

void inserirInicio(Lista *playlist, char musica[]){
    No *novo = (No*)malloc(sizeof(No));
    if(novo == NULL){
        printf("Erro ao alocar memória!\n");
        return;
    }
    strcpy(novo->musica, musica);
    novo->anterior = NULL;
    novo->proximo = playlist->inicio;
    if(playlist->inicio != NULL){
        playlist->inicio->anterior = novo;
    }
    playlist->inicio = novo;
    if(playlist->fim == NULL){
        playlist->fim = novo;
    }
}

void inserirFim(Lista *playlist, char musica[]){
    No *novo = (No*)malloc(sizeof(No));
    if(novo == NULL){
        printf("Erro ao alocar memória!\n");
        return;
    }
    strcpy(novo->musica, musica);
    novo->proximo = NULL;
    novo->anterior = playlist->fim;
    if(playlist->fim != NULL){
        playlist->fim->proximo = novo;
    }
    playlist->fim = novo;
    if(playlist->inicio == NULL){
        playlist->inicio = novo;
    }
}

void removerMusica(Lista *playlist, char musica[]){
    No *atual = playlist->inicio;
    while(atual != NULL){
        if(strcmp(atual->musica, musica) == 0){
            if(atual->anterior != NULL){
                atual->anterior->proximo = atual->proximo;
            } else {
                playlist->inicio = atual->proximo;
            }
            if(atual->proximo != NULL){
                atual->proximo->anterior = atual->anterior;
            } else {
                playlist->fim = atual->anterior;
            }
            free(atual);
            printf("Música removida!\n");
            return;
        }
        atual = atual->proximo;
    }
    printf("Música não encontrada!\n");
}

void exibirPlaylistInicioFim(Lista *playlist){
    No *atual = playlist->inicio;
    printf("Playlist (Início -> Fim):\n");
    while(atual != NULL){
        printf("%s\n", atual->musica);
        atual = atual->proximo;
    }
}

void exibirPlaylistFimInicio(Lista *playlist){
    No *atual = playlist->fim;
    printf("Playlist (Fim -> Início):\n");
    while(atual != NULL){
        printf("%s\n", atual->musica);
        atual = atual->anterior;
    }
}

void liberarMemoria(Lista *playlist){
    No *atual = playlist->inicio;
    while(atual != NULL){
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    playlist->inicio = NULL;
    playlist->fim = NULL;
}

int main(){

    int opcao = -1;
    Lista playlist;
    playlist.inicio = NULL;
    playlist.fim = NULL;

    while(opcao != 0){
        menu();
        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                {
                    char musica[100];
                    printf("Digite o nome da musica: ");
                    scanf(" %[^\n]", musica);
                    inserirInicio(&playlist, musica);
                    break;
                }
            case 2:
                {
                    char musica[100];
                    printf("Digite o nome da musica: ");
                    scanf(" %[^\n]", musica);
                    inserirFim(&playlist, musica);
                    break;
                }
            case 3:
                {
                    char musica[100];
                    printf("Digite o nome da musica a ser removida: ");
                    scanf(" %[^\n]", musica);
                    removerMusica(&playlist, musica);
                    break;
                }
            case 4:
                exibirPlaylistInicioFim(&playlist);
                break;
            case 5:
                exibirPlaylistFimInicio(&playlist);
                break;
            case 0:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    liberarMemoria(&playlist);

    return 0;
}