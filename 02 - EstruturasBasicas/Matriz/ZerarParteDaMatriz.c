#include <stdio.h>

int main(){

    int m[4][4];

    printf("Digite a matriz: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(j > i){
                m[i][j] = 0;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}