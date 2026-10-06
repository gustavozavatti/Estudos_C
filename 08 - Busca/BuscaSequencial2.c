#include <stdio.h>

int busca(int v[], int n){
    int nr = 0;
    for(int i = 0; i < 10; i++){
        nr++;
        if(v[i] == n){
            printf("Numero de repeticoes: %d\n", nr);
            return i;
        }
    }
    return -1;
}

int main(){

    int v[10], n;

    printf("Digite 10 valores do vetor: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("Digite o valor para buscar: ");
    scanf("%d", &n);
    int pos = busca(v, n); 
    if(pos == -1){
        printf("Numero nao encontrado!");
    }
    else{
        printf("Numero encontrado na posicao %d", pos + 1);
    }
    
    return 0;
}