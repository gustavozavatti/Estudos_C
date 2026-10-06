#include <stdio.h>
int main(){

    int q , ma = 0;
    int m[10][10];

    printf("Qual a ordem da matriz: ");
    scanf("%d", &q);

    printf("Digite os numeros da matriz: \n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Maior de cada linha: ");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(m[i][j] > ma){
                ma = m[i][j];
            }
        }
        printf("%d ", ma);
        ma = 0;
    }
    return 0;
}