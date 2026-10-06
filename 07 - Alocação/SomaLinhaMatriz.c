#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, **matriz, soma = 0;
    
    printf("Digite as dimensoes: ");
    scanf("%d %d", &m, &n);
    
    matriz = (int **) malloc(m * sizeof(int *));
    
    printf("Digite a matriz: \n");
    for(int i = 0; i < m; i++){
        soma = 0;
        matriz[i] = (int *) malloc(n * sizeof(int));
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("Soma linha: %d\n", soma);
    }

    for(int i = 0; i < m; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}