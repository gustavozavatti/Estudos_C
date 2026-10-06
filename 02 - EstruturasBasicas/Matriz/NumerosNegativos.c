#include <stdio.h>

int main(){

    int l, c;
    int m[10][10];

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    printf("Digite os elementos da matriz: \n");


    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Numeros negativos: \n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(m[i][j] < 0){
                printf("%d ", m[i][j]);
            }
        }
    }
    return 0;
}