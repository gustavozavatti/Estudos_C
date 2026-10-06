#include <stdio.h>

void nome(){
    char nomes[100];
    printf("Digite um nome: ");
    scanf("%99s", nomes);
    printf("Saudacoes %s!", nomes);
}

int main()
{
    nome();
    return 0;
}