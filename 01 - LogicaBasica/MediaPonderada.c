#include <stdio.h>

int main(){
    float x = 0.00 , y = 0.00, z = 0.00, m = 0.00;
    
    printf("Digite tres numeros: ");
    
    scanf("%f %f %f", &x, &y, &z);
    
    x = x * 2;
    y = y * 3;
    z = z * 5;
    
    m = (x+y+z) / 10;
    
    printf("Media Ponderada: %.2f", m);

    return 0;
}