#include <stdio.h>

int main()
{
    char nome1[100];
    char nome2[100];
    float idade1, idade2, m;
    
    printf("Digite seu nome: ");
    scanf("%s", nome1);
    printf("Digite o nome do amigo: ");
    scanf("%s", nome2);
    printf("Digite as idades: ");
    scanf("%f %f", &idade1, &idade2);
    
    m = (idade1 + idade2)/2;
    
    printf("A média das idades de %s e %s é de %.2f!", nome1, nome2, m);
    
    return 0;
}
