#include <stdio.h>
#include <math.h>

int main(){

    float x, y, d = 0;

    printf("Digite as coordenadas: ");
    scanf("%f %f", &x, &y);

    d = sqrt( pow(x - 0, 2) + pow(y - 0, 2));

    printf("A distancia ate a origem e %.2f", d);

    return 0;
}