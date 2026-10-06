#include <stdio.h>

int main()
{
    int s = 2002, st;
    
    while(st != s){
        printf("Digite a senha: ");
        scanf("%d", &st);
        if(st != s){
            printf("Senha Inválida!\n");
        }
        else{
            printf("Acesso Liberado!\n");
        }
    }

    return 0;
}