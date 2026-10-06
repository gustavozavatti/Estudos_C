#include <stdio.h>

int main()
{
    int x[3][3];

    printf("Digite a Matriz 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        scanf("%d", &x[i][j]);    
        }
    }
    
    printf("\n");
    
    printf("MATRIZ 3X3\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d ", x[i][j]);    
        }
        printf("\n");
    }

    return 0;
}