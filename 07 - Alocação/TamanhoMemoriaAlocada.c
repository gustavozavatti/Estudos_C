#include <stdio.h>
#include <stdlib.h>

int main() {

    int q;

    printf("Digite o numero de elementos: ");
    scanf("%d", &q);

    int *v = (int *) malloc(q * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("TOTAL: %d bytes\n", q * (int)sizeof(int));
    printf("UNIDADE: %d bytes\n", sizeof(v[1]));
    printf("TOTAL DE ELEMENTOS: %d\n", q);
    
    free(v);

    return 0;
}