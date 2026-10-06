#include <stdio.h>

int main(){

    int n1, n2 ,n3;

    printf("Digite os tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Soma do dobro dos numeros e %d", (n1 * 2) + (n2 * 2) + (n3 * 2));

    return 0;
}