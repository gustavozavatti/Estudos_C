#include <stdio.h>
int main(){

    int q, sp = 0, l, c;
    int m[10][10];

    printf("Digite a ordem da matriz: ");
    scanf("%d", &q);

    printf("Digite os numeros da matriz: \n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &m[i][j]);
            if(m[i][j] > 0){
                sp += m[i][j];
            }
        }
    }

    printf("Soma dos positivos: %d\n", sp);
    printf("Escolha uma linha: ");
    scanf("%d", &l);
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(i == l){
                printf("%d ",  m[i][j]);
            }
        }
    }
    printf("\nEscolha uma coluna: ");
    scanf("%d", &c);
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(j == c){
                printf("%d ", m[i][j]);
            }
        }
    }
    printf("\nDiagonal principal: \n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(i == j){
                printf("%d ",  m[i][j]);
            }
        }
    }
    
    printf("\nMatriz alterada: \n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(m[i][j] < 0){
                m[i][j] = m[i][j] *  m[i][j];
            }
        printf("%d ",  m[i][j]);
        }
    printf("\n");
    }

    return 0;
}