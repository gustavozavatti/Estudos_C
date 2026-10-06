#include <stdio.h>
#include <string.h>
int main()
{   
    char n[50];
    int t, p = 0;
    printf("Digite o nome do usuário: ");
    scanf("%s", n);   
    
    t = strlen(n);
    printf("Tamanho do nome é de %d caracteres!\n", t);
    
    for(int i = 0; i < t; i++){
        char c = n[i];
        if(c == '@' || c == '#' || c == '$' || c == '%' || c == '!'){
            p++;
        }
    }
    
    if(p != 0){
        printf("Seu nome tem %d caracteres inválido(s)!", p);
    }
    else{
        printf("Nome Válido!");
    }
    return 0;
}