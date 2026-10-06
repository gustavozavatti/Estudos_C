#include <stdio.h>

int main(){

    int n;
    int v[10];

    printf("Quantidade de numeros: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Numeros Negativos: ");
    for (int i = 0; i < n; i++){
        if (v[i] < 0){
            printf("%d ", v[i]);
        }
    }

    return 0;
}