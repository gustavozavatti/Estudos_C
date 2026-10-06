#include <stdio.h>

int main()
{
    float B, b, h, area;
    
    printf("Digite a base maior: ");
    scanf("%f", &B);
    printf("Digite a base menor: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &h);
    
    area = (b+B)/2*h;
    
    printf("A área é: %f", area);
    
    
    
    return 0;
}