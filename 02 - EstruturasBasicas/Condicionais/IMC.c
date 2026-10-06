#include <stdio.h>

int main(){

    char s;
    float h;

    printf("Digite seu sexo: ");
    scanf(" %c", &s);
    printf("Digite sua altura: ");
    scanf("%f", &h);

    if(s == 'M'){
        printf("Seu peso ideal e %.2f", (72.7 * h) - 58.0);
    }
    else{
        printf("Seu peso ideal e %.2f", (62.1 * h) - 44.7);
    }

    return 0;
}