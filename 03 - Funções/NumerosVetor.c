#include <stdio.h>

void imprime(int v[100], int q){
    for(int i = 0; i < q; i++){
        printf("%d ", v[i]);
    }
}

int main()
{
    int vet[100];
    int q;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &q);
    printf("Digite os numeros: \n");
    for(int i = 0; i < q; i++){
        scanf("%d", &vet[i]);
    }
    printf("Numeros do vetor: ");
    imprime(vet, q);
    
    return 0;
}