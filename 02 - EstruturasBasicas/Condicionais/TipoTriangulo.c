#include <stdio.h>

int main() {

    int l1, l2, l3;

    printf("Digite os lados do triangulo: ");
    scanf("%d %d %d", &l1, &l2, &l3);
    
    if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){

        if(l1 == l2 && l2 == l3){
            printf("Triangulo equilatero!");
        }
        else if(l1 != l2 && l2 != l3 && l1 != l3){
            printf("Triangulo escaleno!");
        }
        else{
            printf("Triangulo isoceles!");
        }

    } else {
        printf("Nao forma um triangulo!");
    }

    return 0;
}
