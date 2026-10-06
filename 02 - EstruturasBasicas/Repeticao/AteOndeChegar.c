#include <stdio.h>

int main(){

    int q;

    printf("Digite ate qual numero quer chegar: ");
    scanf("%d", &q);

    printf("Numeros: ");
    for(int i = 0; i <= q; i++){
        printf("%d ", i);
    }

    return 0;
}