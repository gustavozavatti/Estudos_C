#include <stdio.h>

int main(){
    
    int l, c;
    int soma[10] = {0};
    int m[10][10];

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    printf("Digite os elementos da matriz: ");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
            soma[i] += m[i][j];        
        }
    }
    
    for(int i = 0; i < l; i++){
        printf("Soma linha %d: %d\n", i + 1, soma[i]);
    }
    return 0;
}