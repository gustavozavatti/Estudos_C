#include <stdio.h>

    struct Cliente{
        char nome[50];
        int conta; 
        float saldo;
    };

int main()
{
    int ql;
    struct Cliente cliente[100];
    
    printf("Numero de Cadastros: ");
    scanf("%d", &ql);
    
    for(int i = 0; i < ql; i++){
        printf("Nome cliente %d: ", i + 1);
        scanf("%s", cliente[i].nome);
        printf("Numero da conta: ");
        scanf("%d", &cliente[i].conta);
        printf("Saldo: ");
        scanf("%f", &cliente[i].saldo);
    }
    
    printf("============================\n");
    printf("Clientes com saldo negativo: \n");
    
    for(int i = 0; i < ql; i++){
        if(cliente[i].saldo < 0){
        printf("%s\n", cliente[i].nome);
        }
    }
    
    
    return 0;
}