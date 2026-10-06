#include <stdio.h>
#include <stdlib.h>

struct lista{
    int valor;
    struct lista *proximo;
};

int main(){

    int t;

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

    printf("Valores da lista: ");
    struct lista *temp = primeiro;
    while(temp != NULL){
        printf("%d ", temp -> valor);
        temp = temp -> proximo;
    }

    temp = primeiro;
    while(temp != NULL){
        struct lista *proximo = temp -> proximo;
        free(temp);
        temp = proximo;
    }

    return 0;
}