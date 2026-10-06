#include <stdio.h>
int main(){

    float n1, n2, n3;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if((n1 + (n2 * 2) + (n3 * 3)) / 6 >= 60){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }

    return 0;
} 