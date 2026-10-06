#include <stdio.h>

int vetor(int n, int v[]){
    if(n < 0){
        return 0;
    }
    else{
        return v[n] + vetor(n - 1, v);
    }

}

int main(){

    int q, v[100];

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &q);

    printf("Digite os numeros: ");
    for(int i = 0; i < q; i++){
        scanf("%d", &v[i]);
    }

    printf("A soma do vetor e: %d", vetor(q - 1, v));

    return 0;
}