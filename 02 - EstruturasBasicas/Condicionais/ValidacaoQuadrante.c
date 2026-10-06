#include <stdio.h>

int main()
{

    float x, y;
    
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);
    
    if(x > 0 && y > 0){
        printf("Primeiro Quadrante!");
    }
    else{
        if(x < 0 && y > 0){
            printf("Segundo Quadrante!");
        }
        else{
            if(x < 0 && y < 0){
                printf("Terceiro Quadrante!");
            }
            else{
                if(x > 0 && y < 0){
                    printf("Quarto Quadrante!");
                }
                else{
                    if(x == 0 && y != 0){
                    printf("Eixo Y!");
                    }
                    else{
                        if(y == 0 && x != 0){
                            printf("Eixo X!");
                        }
                        else{
                            printf("Origem!");
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}