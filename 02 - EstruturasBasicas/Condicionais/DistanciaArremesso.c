#include <stdio.h>

int main()
{

    float a1, a2, a3;
    
    printf("Digite a distância do arremesso 1: ");
    scanf("%f", &a1);
    printf("Digite a distância do arremesso 2: ");
    scanf("%f", &a2);
    printf("Digite a distância do arremesso 3: ");
    scanf("%f", &a3);
    
    if(a1 > a2 && a1 > a3){
        printf("A maior distância é: %.2f!", a1);
    }
    else{
        if(a2 > a1 && a2 > a3){
            printf("A maior distância é: %.2f!", a2);   
        }
        else{
            printf("A maior distância é: %.2f!", a3);
        }
    }
    
    
    

    return 0;
}