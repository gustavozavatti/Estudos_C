#include <stdio.h>

int main(){

    int q;

    printf("Digite um valor de 4 digitos: ");
    scanf("%d", &q);

    printf("Valor dividido por linhas: \n");
    printf("%d\n", q / 1000);
    printf("%d\n", (q / 100) - (q / 1000) * 10);
    printf("%d\n", ((q % 100) - (q % 10)) / 10);
    printf("%d\n", q % 10);

}