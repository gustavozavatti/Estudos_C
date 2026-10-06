#include <stdio.h>

int main(){

    int m[3][3], s = 0;

    printf("Digite a matriz: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j > i){
                s += m[i][j];
            }
        }
    }

    printf("Soma total: %d", s);

    return 0;
}