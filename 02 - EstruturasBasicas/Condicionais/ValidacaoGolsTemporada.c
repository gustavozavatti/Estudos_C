#include <stdio.h>

int main()
{
    int g;
    
    printf("Digite o número de gols na temporada: ");
    scanf("%d", &g);
   
    if(g > 10){
        printf("Exelente temporada!");
    }
    else if(g >= 5 && g <= 10 ){
        printf("Boa temporada!");    
    }
    else{
        printf("Temporada abaixo do esperado!");    
    }
    
    
    return 0;
}