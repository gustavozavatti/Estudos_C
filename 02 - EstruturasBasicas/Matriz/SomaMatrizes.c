#include <stdio.h>

int main(){

    int l, c;
    int m1[10][10], m2[10][10], m3[10][10];

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    printf("Numeros matriz 1: \n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Numeros matriz 2: \n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Numeros matriz 3: \n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", m3[i][j]);
        }
    printf("\n");
    }
    return 0;
}