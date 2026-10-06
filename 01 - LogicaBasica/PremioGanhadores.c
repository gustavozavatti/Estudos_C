#include <stdio.h>

int main(){

    float vt = 780000.00;

    printf("O primeiro ganhador: %.2f \n", vt -(vt * (54.0 / 100.0)));
    printf("O segundo ganhador: %.2f \n",  vt - (vt *(68.0 / 100.0)));
    printf("Terceiro ganhador: %.2f", vt - (vt *(78.0 / 100.0)));

    return 0;
}