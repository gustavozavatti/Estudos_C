#include <stdio.h>
int main(){

    int q;
    int mv = 0, p;
    int vp[10];

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        printf("Digite um numero: ");
        scanf("%d", &vp[i]);
    }

    for(int i = 0; i < q; i++){
        if(vp[i] > mv){
            mv = vp[i];
            p = i;
        }
    }
    
    printf("Maior Valor: %d\n", mv);
    printf("Posicao: %d", p + 1);

    return 0;
}