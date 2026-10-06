#include <stdio.h>

int main(){
    
    int q, s = 0;
    int m[10][10];

    printf("Digite a ordem da matriz: ");
    scanf("%d", &q);

    printf("Digite os termos da matriz: \n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &m[i][j]);
            if(j > i){
                s += m[i][j];
            }
        }
    }

    printf("Soma acima da diagonal: %d", s);

    return 0;
}