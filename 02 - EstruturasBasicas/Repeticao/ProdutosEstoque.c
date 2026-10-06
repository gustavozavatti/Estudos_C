#include <stdio.h>

int main()
{
    int q, i, e, em;
    char nome[20];
    
    printf("Digite o total de produtos para cadastro: ");
    scanf("%d", &q);
    
    for(i = 0; i < q; i++){
        printf("Digite o nome do produto: ");
        scanf("%s", nome);
        printf("Digite a quantidade no estoque: ");
        scanf("%d", &e);
        printf("Digite o estoque mínimo: ");
        scanf("%d", &em);
        if(e >= em){
            printf("O produto %s tem estoque suficiente!\n", nome);
        }
        else{
            printf("O produto %s precisa ser reposto!\n", nome);
        }
        printf("\n");
    }

    return 0;
}