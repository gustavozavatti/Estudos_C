#include <stdio.h>

void transversal(int q, int m[10][10]) {
    int gm[10][10];

    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            gm[j][i] = m[i][j];
        }
    }

    printf("Transversal:\n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            m[i][j] = gm[i][j];
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int q;
    int m[10][10];

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &q);

    printf("Digite os numeros da matriz:\n");
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &m[i][j]);
        }
    }

    transversal(q, m);

    return 0;
}
