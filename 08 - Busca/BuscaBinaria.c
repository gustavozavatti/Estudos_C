#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor)
            return meio;
        else if (valor < vetor[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }

    return -1;
}

int main() {
    int numeros[] = {10, 12, 37, 49, 52};
    int n = 5, x, posicao;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &x);

    posicao = buscaBinaria(numeros, n, x);

    if (posicao != -1)
        printf("Valor encontrado na posicao %d\n", posicao);
    else
        printf("Valor nao encontrado.\n");

    return 0;
}
