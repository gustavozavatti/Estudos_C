#include <stdio.h>

int main()
{
    int matriz[20][20];
    int t;
    int c = 0;
    
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            scanf("%d", &matriz[i][j]);
            if(i != j && matriz[i][j] == 1){
                printf("Não é uma matriz de identidade!");
                return 0;
            }
            if(i != j && matriz[i][j] != 0){
                printf("Não é uma matriz de identidade!\n");
                return 0;
            }
        }
    }
    printf("============================\n");
    printf("Matriz %dx%d: \n", t, t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            printf("  %d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("É uma matriz de identidade!");
    return 0;
}