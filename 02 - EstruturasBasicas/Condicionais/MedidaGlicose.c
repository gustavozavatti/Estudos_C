#include <stdio.h>

int main()
{

    float g;
    
    printf("Digite a medida da glicose: ");
    scanf("%f", &g);
    
    if(g <= 100 && g > 0){
        printf("Normal!");
    }
    else{
        if(g > 100 && g <= 140){
        printf("Elevado!");
        }
        else{
            printf("Diabetes!");
        }
    }
    
    

    return 0;
}