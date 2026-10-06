#include <stdio.h>

int main() {
    int x[3][3], s = 0;

    printf("Digite a matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("\nContador de Pares:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(x[i][j] % 2 == 0) {
                s++;
            }
        }
    }

    if(s > 0){
        printf("Na matriz tem %d pares", s);
    }
    else{
        printf("Nao tem pares!");
    }
    return 0;
}