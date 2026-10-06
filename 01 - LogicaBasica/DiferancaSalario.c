#include <stdio.h>

int main()
{
    float s1, s2, d;
    
    printf("Digite o salário do jogador 1: ");
    scanf("%f", &s1);
    printf("Digite o salário do jogador 2: ");
    scanf("%f", &s2);
    
    d = s1 - s2;
   
    
    printf("A diferença é de %.2f", d);
    
    
    return 0;
}