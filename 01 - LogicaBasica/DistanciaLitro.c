#include <stdio.h>

int main()
{
    float d, cg, cm;
    
    printf("Digite a distância total(Km): ");
    scanf("%f", &d);
    printf("Digite o total de combústivel gasto: ");
    scanf("%f", &cg);
    
    cm = d / cg;
    
    printf("A distância média por litro é: %.2f", cm);
    
    return 0;
}