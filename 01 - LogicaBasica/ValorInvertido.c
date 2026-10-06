#include <stdio.h>

int main(){

    int q, i = 0;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &q);

    int c = q / 100;
    int d = (q / 10) % 10;
    int u = (q % 10); 

    i = c + d  * 10 + u * 100;

    printf("O valor invertido e %d", i);
    return  0;
}