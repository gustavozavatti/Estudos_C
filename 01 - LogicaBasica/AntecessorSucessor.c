#include <stdio.h>

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O antecessor e %d e o sucessor e %d!", n - 1, n + 1);

    return 0;
}