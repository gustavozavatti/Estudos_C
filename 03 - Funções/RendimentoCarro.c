#include <stdio.h>

float rendimento(float km, float l){
    return km/l;
}

int main(){

    float km, l;

    printf("Digite a quantidade de quilometros: ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros: ");
    scanf("%f", &l);

    printf("Seu consumo e de %.2f KM/L!", rendimento(km, l));

    return 0;
}