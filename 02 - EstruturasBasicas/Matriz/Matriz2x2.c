#include <stdio.h>

int main()
{
    int x[2][2];
    
    printf("Digite os numeros da matriz: \n");
    for(int i=0; i <= 1; i++){
        for(int j=0; j <= 1; j++){
            scanf("%d", &x[i][j]);
        }
    }
    
    printf("Matriz 2x2: \n");
    for(int i=0; i <= 1; i++){
        for(int j=0; j <= 1; j++){
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}