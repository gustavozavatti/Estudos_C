#include <stdio.h>
#include <math.h>

int main(){

    float n1;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    if(n1 > 0){
        printf("A raiz de %.0f e %.2f", n1, sqrt(n1));
    }
    else{
        printf("Numero invalido!");
    }

    return 0;
}