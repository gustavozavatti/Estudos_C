#include <stdio.h>

 void nota(float n){
    if(n >= 6){
        printf("Parabéns você passou!");
    }    
    else{
        if(n < 6 && n >= 4){
            printf("Recuperação!");
        }
        else{
            printf("Reprovado");
        }
    }
}


int main()
{
    float n;
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &n);
    
    nota(n);
    return 0;
}