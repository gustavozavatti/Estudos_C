#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x;
    float delta = 0;

    printf("Digite valor de A:");
    scanf("%f", &a);
    printf("Digite valor de B:");
    scanf("%f", &b);
    printf("Digite valor de C:");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0){
        printf("Nao ha raizes reais!");
    }
    else{
        if(delta == 0){
            x = (-b) / (2 * a);
            printf("Raiz unica: %.2f", x);
        }
        else{
            x = (-b + sqrt(delta)) / (2 * a);
            printf("Raiz 1: %.2f", x);
            x = (-b - sqrt(delta)) / (2 * a);
            printf("Raiz 2: %.2f", x);
        }
    }

    return 0;
}