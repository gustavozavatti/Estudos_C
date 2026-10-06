#include <stdio.h>

int main(){

    int q, c = 0;

    printf("Digite um numero: ");
    scanf("%d", &q);

    for(int i = q; i > 0; i--){
        if(q % i == 0){
            c++;
        }
    }
    if(c == 2){
        printf("Numero primo!");
    }
    else{
        printf("Nao e primo!");
    }

    return 0;
}