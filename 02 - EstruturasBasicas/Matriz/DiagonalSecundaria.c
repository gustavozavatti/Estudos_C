#include <stdio.h>

int main() {
    
    int x[50][50], t, s = 0;

    printf("Tamanho da tabela: ");
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < t; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    for(int i = 0; i < t; i++) {
        s += x[i][t - 1 - i];
    }

    printf("Soma da diagonal secundaria: %d\n", s);

    return 0;
}