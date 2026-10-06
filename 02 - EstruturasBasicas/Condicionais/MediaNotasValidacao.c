#include <stdio.h>
int main(){

    float n1, n2, n3;
    float media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    if(media >= 0 && media <= 2.9){
        printf("Reprovado!");
    }
    else{
        if(media >= 3 && media <= 4.9){
            printf("Reavaliacao!");
        }
        else{
            printf("Aprovado!");
        }
    }

    return 0;
} 