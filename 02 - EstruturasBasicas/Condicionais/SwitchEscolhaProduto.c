#include <stdio.h>

int main()
{

    int c, q;
    float v;
    
    printf("Digite o código do produto: ");
    scanf("%d", &c);
    
    switch (c) {
        case 1:
            v = 5.00;
            printf("Valor do produto é 5.00!\n");
            printf("Digite a quantidade do produto: ");
            scanf("%d", &q);
            v = v * q;
            printf("Valor total: %.2f", v);
            break;
            
        case 2:
            v = 3.50;
            printf("Valor do produto é 3.50!\n");
            printf("Digite a quantidade do produto: ");
            scanf("%d", &q);
            v = v * q;
            printf("Valor total: %.2f", v);
            break;
            
        case 3:
            v = 4.80;
            printf("Valor do produto é 4.80!\n");
            printf("Digite a quantidade do produto: ");
            scanf("%d", &q);
            v = v * q;
            printf("Valor total: %.2f", v);
            break;
            
        case 4:
            v = 8.90;
            printf("Valor do produto é 8.90!\n");
            printf("Digite a quantidade do produto: ");
            scanf("%d", &q);
            v = v * q;
            printf("Valor total: %.2f", v);
            break;
        
        case 5: 
            v = 7.32;
            printf("Valor do produto é 7.32!\n");
            printf("Digite a quantidade do produto: ");
            scanf("%d", &q);
            v = v * q;
            printf("Valor total: %.2f", v);
            break;
            
        default:
            printf("Opção inválida. Tente novamente.\n");
            return 0;
    }
    
    return 0;
}