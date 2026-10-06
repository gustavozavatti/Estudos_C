#include <stdio.h>
#include <stdlib.h>

void inverte(char *l, int tamanho){
    char a;
    for(int i = 0 ; i < tamanho / 2; i++){
        a = l[i];
        l[i] = l[tamanho - i - 1];
        l[tamanho - i - 1] = a;
    }
}

int main(){

    char *valores;
    int q;

    printf("Digite a quantidade de letras: ");
    scanf("%d", &q);

    valores = (char*) calloc(q, sizeof(char));

    if(valores == NULL){
        printf("Erro!");
        return 1;
    }

    printf("Digite as letras: ");
    for(int i = 0; i < q; i++){
        scanf(" %c", &valores[i]);
    }
    printf("Letras antes: ");
    for(int i = 0; i < q; i++){
        printf("%c", valores[i]);
    }

    inverte(valores, q);

    printf("\nLetras depois: ");
    for(int i = 0; i < q; i++){
        printf("%c", valores[i]);
    }

    free(valores);

    return 0;
}