#include <stdio.h>
#include <stdlib.h>

int main(){

    float *valores, m = 0;
    int q;

    printf("Digite a quantidade: ");
    scanf("%d", &q);

    valores = (float*) calloc(q, sizeof(float));

    if(valores == NULL){
        printf("Erro!");
        return 1;
    }

    printf("Digite as valores: ");
    for(int i = 0; i < q; i++){
        scanf("%f", &valores[i]);
    }
    printf("Media :");
    for(int i = 0; i < q; i++){
        m += valores[i];
    }
    printf("%.2f", m / q);

    free(valores);

    return 0;
}