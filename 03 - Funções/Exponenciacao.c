#include <stdio.h>

int expoente(int n1, int n2){
    int t = 1;
    for(int i = 0; i < n2; i++){
        t = n1 * t;
    }
    return t;
}

int main(){

    int b, e;

    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digte o expoente: ");
    scanf("%d", &e);

    printf("Valor total %d", expoente(b, e));

    return 0;
}