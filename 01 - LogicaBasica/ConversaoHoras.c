#include <stdio.h>

int main()
{
    int h, m;
    
    printf("Digite o total de minutos: ");
    scanf("%d", &m);
    
    h = m / 60;
    m = m % 60;
    
    printf("O tempo total foi de %d horas e %d minutos.", h, m);
    
    return 0;
}