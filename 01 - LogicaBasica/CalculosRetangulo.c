#include <stdio.h>
#include <math.h>

int main()
{
    float b, h;
    float a, p, d;
    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &h);
    printf("Digite a base do retângulo: ");
    scanf("%f", &b);

    a = b * h;
    p = (2 * b) + (2 * h);
    d = sqrt(pow(b, 2) + pow(h, 2));
    
    printf("\n");
    
    printf("Área do retângulo é %.2f!\n", a);
    printf("O perímetro do retângulo é %.2f!\n", p);
    printf("A diagonal do retângulo é %.4f!\n", d);
    
    return 0;
}