#include <stdio.h>

int main(){

     int m[4][4], M = 0, x, y;

    printf("Digite os valores: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           if(m[i][j] > M){
                M = m[i][j];
                x = i;
                y = j;
           }
        }
    }

    printf("Localizacao do maior numero e na linha %d e coluna %d", x + 1, y + 1);

    return 0;
}