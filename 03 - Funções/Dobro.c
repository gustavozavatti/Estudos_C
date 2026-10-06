#include <stdio.h>

int dobro(int *n){

    *n = *n * 2;
    return *n;
}

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    dobro(&n);

    printf("Dobro: %d", n);

    return 0;
}