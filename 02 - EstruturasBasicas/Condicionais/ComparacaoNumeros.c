#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2){
        printf("%d e maior!", n1);
    }
    else{
        if(n2 > n1){
            printf("%d e maior!", n2);
        }
        else{
            printf("Os numeros sao iguais!");
        }
    }

    return 0;
}