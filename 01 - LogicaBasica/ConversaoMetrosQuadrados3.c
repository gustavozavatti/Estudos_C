#include <stdio.h>

int main(){

    float H, M;

    printf("Digite o valor em metros quadrados: ");
    scanf("%f", &M);

    H = M * 0.0001;

    printf("A area em hectares e %.2f", H);

    return 0;
}