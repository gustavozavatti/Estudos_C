#include <stdio.h>

int main(){

    int m[4][4];

    printf("Digite os valores: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Valores maiores que 10: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           if(m[i][j] > 10){
            printf("%d ", m[i][j]);
           }
        }
    }

    return 0;
}