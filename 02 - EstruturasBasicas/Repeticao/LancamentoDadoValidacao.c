#include <stdio.h>

int main(){

    int d1, d2, q;

    printf("Digite a quantidade de vezes do lancamento: ");
    scanf("%d", &q);


    for(int i = 0; i < q; i++){
        printf("Digite o valor do dado 1: ");
        scanf("%d", &d1);
        printf("Digite o valor do dado 2: ");
        scanf("%d", &d2);

        if(d1 > d2){
            printf("Dado 1 > Dado 2\n");
        }
        else{
            if(d1 < d2){
                printf("Dado 1 < Dado 2\n");
            }
            else{
                printf("Dado 1 = Dado 2\n");
            }
        }
    }


    return 0;
}