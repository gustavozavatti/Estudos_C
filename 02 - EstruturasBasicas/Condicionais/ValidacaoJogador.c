#include <stdio.h>

int main()
{
    int i, g;
    
    
    printf("Digite a idade do jogador: ");
    scanf("%d", &i);
    printf("Digite o número de gols na temporada: ");
    scanf("%d", &g);
   
    if(i <= 20 && g > 10){
        printf("Jovem talento promissor!");
    }
    else{
        if(i <= 20 && g <= 10){
            printf("Jovem em desenvolvimento!");
        }
        else{
            if(i > 20 && g > 15){
                printf("Jogador experiente em grande fase!");
            }
            else{
                printf("Estevão!");
            }
        }
    }
   
    
    return 0;
}