#include <stdio.h>
#include <stdlib.h>

void ler(int v[], int t){
    printf("Digite os numeros do vetor: ");
    for (int i = 0; i < t; i++){
        scanf("%d", &v[i]);
    }
}

int main(){

    int t, s1 = 0, s2 = 0;

    printf("Digite os tamanho dos vetores: ");
    scanf("%d", &t);

    int *v = (int *) malloc(t * sizeof(int));
    int *q = (int *) malloc(t * sizeof(int));

    if(v == NULL || q == NULL){
        printf("Erro de alocacao!\n");
        return 1;
    }

    ler(v, t);
    ler(q, t);

    for(int i = 0; i < t; i++){
        s1 += v[i];
        s2 += q[i];
    }

    printf("SOMA V: %d\n", s1);
    printf("SOMA Q: %d\n", s2);

    free(q);
    free(v);
    printf("Deu certo!");
    return 0;
}