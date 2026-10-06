#include <stdio.h>

int main(){

    int veta[10];
    int vetb[10];
    int vetc[10];

    printf("Digite os dez numeros do vetor 1: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &veta[i]);
    }
    printf("Digite os dez numeros do vetor 2: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetb[i]);
    }
    printf("Soma dos vetores: ");
    for(int i = 0; i < 10; i++){
        vetc[i] = veta[i] + vetb[i];
        printf("%d ", vetc[i]);
    }

    return 0;
}