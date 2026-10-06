#include <stdio.h>

int main(){

    float s, e;

    printf("Digite o salario: ");
    scanf("%f", &s);
    printf("Valor do emprestimo: ");
    scanf("%f", &e);

    if(e <= s * 0.2){
        printf("Emprestimo aprovado!");
    }
    else{
        printf("Emprestimo negado!");
    }


    return 0;
}