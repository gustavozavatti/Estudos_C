#include <stdio.h>

int main()
{
    float cp, t, p;
    
    printf("Digite a capacidade total do estádio: ");
    scanf("%f", &cp);
    printf("Digite o total de torcedores no estádio: ");
    scanf("%f", &t);
    
    p = t / cp;
    p = p * 100;
    
    if(p > 90){
        printf("Lotado!");
    }
    else{
        if(p <= 90 && p >= 70){
            printf("Ótima presença de público!");
        }
        else{
            if(p < 70 && p >= 50){
                printf("Público razoável!");
            }
            else{
                printf("Morumbis!");
            }
        }
    }
   
    
    return 0;
}