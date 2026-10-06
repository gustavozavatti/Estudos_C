#include <stdio.h>
#include <stdlib.h>

struct lista{
    int valor;
    struct lista *proximo;
};

int busca(int v, struct lista *primeiro){
    struct lista *temp = primeiro;
    while(temp != NULL){
        if(v == temp -> valor){
            return 0;
        }
        else{
            temp = temp -> proximo;  
        }
    }
    return 1;
}

int main(){

    int t, b = 0;

    printf("Digite a quantidade: ");
    scanf("%d", &t);

    if(t <= 0){
        printf("Valor Invalido!");
        return 1;
    }

    struct lista *primeiro = NULL;
    struct lista *ultimo = NULL;

    for(int i = 0; i < t; i++){
        struct lista *novo = malloc(sizeof(struct lista));
        printf("Digite um valor: ");
        scanf("%d", &novo -> valor);
        novo -> proximo = NULL;

        if(primeiro == NULL){
            primeiro = novo;
            ultimo = novo;
        } else{
            ultimo -> proximo = novo;
            ultimo = novo;
        }
    }

    printf("Valor para buscar: ");
    scanf("%d", &b);

    if(busca(b, primeiro) == 0){
        printf("Numero encontrado!");
    }
    else{
        printf("Numero nao encontrado!");
    }

    struct lista *temp = primeiro;
    temp = primeiro;
    while(temp != NULL){
        struct lista *proximo = temp -> proximo;
        free(temp);
        temp = proximo;
    }

    return 0;
}