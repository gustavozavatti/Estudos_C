#include <stdio.h>

int main() {
    int num, b = 0;
    int *pnum = &num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    b = num;

    printf("Digite outro valor: ");
    scanf("%d", pnum);

    printf("Diferenca: %d\n", num - b);

    return 0;
}