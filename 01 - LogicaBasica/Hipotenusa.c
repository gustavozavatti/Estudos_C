#include <stdio.h>
#include <math.h>

int main(){

    float a, b;

    printf("Digite o valor de A e B: ");
    scanf("%f %f", &a, &b);

    printf("A hipotenusa e %.2f", sqrt(pow(a, 2) + pow(b, 2)));
}