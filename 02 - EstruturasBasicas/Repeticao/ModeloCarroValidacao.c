#include <stdio.h>

int main()
{
    int q, i, a, f;
    char nome[40];
    
    printf("Digite o total de carros para registrar: ");
    scanf("%d", &q);
    
    for(i = 0; i < q; i++){
        printf("Digite o modelo do carro: ");
        scanf("%s", nome);
        printf("Digite o ano de fabricação: ");
        scanf("%d", &a);
        printf("Está funcionando(1 ou 0): ");
        scanf("%d", &f);
        if(a < 2005 && f == 0){
            printf("Carro %s precisa de reparos urgente!\n", nome);
        }
        else if(a < 2005 && f == 1){
            printf("O carro %s é antigo, levar a revisão!\n", nome);
        }
        else if(a > 2005 && f == 0){
            printf("O carro %s precisa de manutenção!\n", nome);
        }
        else if(a > 2005 && f == 1){
            printf("O carro %s esta em boas condições!\n", nome);
        }
        
        printf("\n");
    }

    return 0;
}