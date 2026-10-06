#include <stdio.h>

int main()
{
    int x, y;
    
    while(x != y){
        printf("Digite dois números: ");
        scanf("%d %d", &x, &y);
        
        if(x < y){
            printf("Crescente!\n");
        }
        else{
            if(x > y){
                printf("Decrescente!\n");
            }
            else{
                printf("Fim Programa!");
            }
        }
    }

    return 0;
}