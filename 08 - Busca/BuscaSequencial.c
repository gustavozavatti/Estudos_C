#include <stdio.h>

int busca(int v[], int n) {
    for(int i = 0; i < 10; i++){
        if(v[i] == n){
            return i;
        }
    }
    return -1;
}

int main() {

    int v[10], n;

    printf("Digite 10 valores do vetor:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("Digite o valor para busca: ");
    scanf("%d", &n);

    int pos = busca(v, n);

    if(pos == -1){
        printf("Numero nao encontrado!\n");
    } else {
        printf("Numero encontrado na posicao %d\n", pos + 1);
    }

    return 0;
}
