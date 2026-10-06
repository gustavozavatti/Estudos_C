#include <stdio.h>

    struct Cliente{
        char nome[50];
        int conta; 
        float saldo;
    };

int main()
{
    int cm = 0;
    float sm = -100000000000000;
    int ql, j = 0;
    int negativados[50];
    struct Cliente cliente[100];
    
    printf("Numero de Cadastros: ");
    scanf("%d", &ql);
    
    for(int i = 0; i < ql; i++){
        printf("Nome cliente %d: ", i + 1);
        scanf("%s", cliente[i].nome);
        printf("Número da conta: ");
        scanf("%d", &cliente[i].conta);
        printf("Saldo: ");
        scanf("%f", &cliente[i].saldo);
    }
    
    printf("============================\n");
    printf("Contas com saldo negativo: \n");
    
    for(int i = 0; i < ql; i++){
        if(cliente[i].saldo < 0){
            negativados[j] = cliente[i].conta;
            printf("%d\n", negativados[j]);
            j++;
        }
    }
    printf("============================\n");
    printf("Conta com maior saldo: \n");
    for(int i = 0; i < ql; i++){
        if(cliente[i].saldo > sm){
            sm = cliente[i].saldo;
            cm = cliente[i].conta;
        }    
    }
    printf("%d\n", cm);
    return 0;
}