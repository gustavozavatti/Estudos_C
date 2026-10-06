#include <stdio.h>

int main(){

    float L = 0, K;

    printf("Digite as quilogramas: ");
    scanf("%f", &K);

    L = K * 2.20462;

    printf("A massa em libras e %.2f", L);

    return 0;
}