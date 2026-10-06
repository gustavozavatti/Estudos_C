#include <stdio.h>

int main()
{
    int v, e, d, t;
    
    printf("Digite o total de vitórias: ");
    scanf("%d", &v);
    printf("Digite o total de empates: ");
    scanf("%d", &e);
    printf("Digite o total de derrotas: ");
    scanf("%d", &d);
    
    v = v * 3;
    e = e * 1;
    d = d * 0;
    t = v + e + d;
    
    printf("O total de pontos foi %d", t);
    
    
    return 0;
}