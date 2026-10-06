#include <stdio.h>

int main()
{
    int matriz[3][2];
    int matriz1[2][3];

    printf("Digite a matriz: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("============================\n");
    printf("Matriz 3x2: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            matriz1[j][i] = matriz[i][j];
        }
    }
    
    printf("Matriz 2x3: \n");
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("  %d  ", matriz1[i][j]);
        }
        printf("\n");
    }
    return 0;
}