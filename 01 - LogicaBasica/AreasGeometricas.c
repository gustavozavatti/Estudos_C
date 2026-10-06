#include <stdio.h>

int main()
{
    float a, b, c;
    float q, t, tr;
    
    printf("Digite valor de A: ");
    scanf("%f", &a);
    printf("Digite valor de B: ");
    scanf("%f", &b);
    printf("Digite valor de C: ");
    scanf("%f", &c);
    
    q = a * a; 
    printf("Área quadrado: %.2f\n", q);
    t = (a * b) / 2;
    printf("Área triângulo: %.2f\n", t);
    tr = ((a + b) * c) / 2;
    printf("Área trapézio: %.2f\n", tr);
    
    return 0;
}