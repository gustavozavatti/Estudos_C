#include <stdio.h>

int main(){

    float km, l, kml;

    printf("Digite a distancia: ");
    scanf("%f", &km);
    printf("Digite os litros gastos: ");
    scanf("%f", &l);

    kml = km / l;

    if(kml < 8){
        printf("Venda o carro!");
    }
    else{
        if(kml > 12){
            printf("Super Economico!");
        }
        else{
            printf("Economico!");
        }
    }

    return 0;
}