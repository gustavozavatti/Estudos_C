#include <stdio.h>

int main()
{
    float n1, n2, m = 0;
    
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    
    while(n1 < 0 || n1 > 10.0){
        printf("Inválido! Digite Novamente: ");
        scanf("%f", &n1);
    }
    
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    
    while(n2 < 0 || n2 > 10.0){
        printf("Inválido! Digite Novamente: ");
        scanf("%f", &n2);
    }
    
    m = (n1 + n2) / 2;
    
    printf("Média: %.2f", m);
    
    return 0;
}