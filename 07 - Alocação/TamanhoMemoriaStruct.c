#include <stdio.h>
#include <stdlib.h>

    struct pessoa{
        char nome[50];
        int idade;
        float altura;
    };
    

int main(){

    struct pessoa *l = (struct pessoa *) calloc(1, sizeof(struct pessoa));

    printf("TAMANHO: %d", sizeof(struct pessoa));

    free(l);
    return 0;
}