#include <stdio.h>

int main(){

    int q;

    printf("Digite um numero: ");
    scanf("%d", &q);

    printf("Divisores: ");
    for(int i = q; i > 0; i--){
        if(q % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}