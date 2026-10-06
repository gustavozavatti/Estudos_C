#include <stdio.h>

int main(){

    float L, K;

    printf("Digite as libras: ");
    scanf("%f", &L);

    K = L / 2.20462;

    printf("A massa em quilogramas e %.2f", K);

    return 0;
}