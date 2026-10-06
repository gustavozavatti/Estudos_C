#include <stdio.h>

int main(){

    int d;

    printf("Digite o total de dias trabalhados: ");
    scanf("%d", &d);

    printf("O total liquido e %.2f.", (d * 30 - (d *  30 * (8.0 / 100.0))));

    return 0;
}