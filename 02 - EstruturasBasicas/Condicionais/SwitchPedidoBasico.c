#include <stdio.h>

int main()
{
    int p;
    
    printf("1.Hambúrguer 2.Cachorro-Quente 3.Pizza 4.Sair\n");
    printf("Selecione seu pedido: \n");
    scanf("%d", &p);
    
    switch(p){
        case 1: printf("Hambúrguer");
        break;
        case 2: printf("Cachorro-Quente");
        break;
        case 3: printf("Pizza");
        break;
        case 4: printf("Encerrando pedido..");
        break;
        default : printf("Opção Inválida!");
        break;
    }

    return 0;
}