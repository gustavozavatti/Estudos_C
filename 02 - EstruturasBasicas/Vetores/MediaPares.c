#include <stdio.h>
int main(){

    int q, vt[10], t = 0;
    float m = 0;

    printf("Digite a quantidade de nuemros: ");
    scanf("%d", &q);

    printf("Digite os numeros: ");
    for(int i = 0; i < q; i++){
        scanf("%d", &vt[i]);
    }

    for(int i = 0; i < q; i++){
        if(vt[i] % 2 == 0){
            t++;
            m += vt[i];
        }
    }

    if(t != 0){
        printf("A media dos pares: %.2f", m/t);
    }
    else{
        printf("Nao tem numeros pares!");
    }


    return 0;
}