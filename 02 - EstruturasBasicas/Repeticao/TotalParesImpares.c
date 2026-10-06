#include <stdio.h>

int main(){

    int q, v;
    int s = 0, m = 1;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &q);

    printf("Digite os numeros: ");
    for(int i = 0; i < q; i++){
        scanf("%d", &v);
        if(v % 2 == 0){
            s += v;
        }
        else{
            if(v % 2 == 1){
                m *= v;
            }
        }
    }
    printf("Valor total pares: %d Valor total impares: %d", s, m);

    return 0;
}