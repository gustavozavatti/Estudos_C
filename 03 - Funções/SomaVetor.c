#include <stdio.h>

float imprime(float v[100], int q){
    float s = 0;
    for(int i = 0; i < q; i++){
        s += v[i];
    }
    return s;
}

int main()
{
    float vet[100];
    float q;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%f", &q);
    printf("Digite os numeros: \n");
    for(int i = 0; i < q; i++){
        scanf("%f", &vet[i]);
    }
    printf("Soma elementos: %.2f", imprime(vet, q));
    
    
    return 0;
}