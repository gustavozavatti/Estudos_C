#include <stdio.h>

int main(){

    int q;

    printf("Digite um numero: ");
    scanf("%d", &q);

    printf("Soma do sucessor do tiplo com o antecessor de seu dobro e %d!", ((q * 3) + 1) + ((q * 2) - 1));

    return 0;
}