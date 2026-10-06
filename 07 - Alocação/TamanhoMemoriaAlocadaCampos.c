#include <stdio.h>
#include <stdlib.h>

    struct pessoa{
        char nome[50];
        float notas[5];
    };
    

int main(){

    struct pessoa *l = (struct pessoa *) calloc(1, sizeof(struct pessoa));

    if(l == NULL){
        printf("Erro de Alocacao!");
    }

    printf("STRUCT: %d\n", sizeof(struct pessoa));
    printf("NOTAS: %d\n", sizeof(l -> notas));
    printf("NOTAS UNICO: %d\n", sizeof(l -> notas[0]));

    free(l);
    return 0;
}
