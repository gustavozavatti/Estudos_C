#include <stdio.h>

void imprimir(int n[], int t){
    for(int i = 0; i < t; i++){
        printf("%d ", n[i]);
    }
}

void insertionSort(int n[], int t){
    for(int i = 1; i < t; i++){
        int chave = n[i];
        int j = i - 1;
        while(j >= 0 && n[j] > chave){
            n[j + 1] = n[j];
            j--;
        }
        n[j + 1] = chave;
    }
}

int main(){

    int n[] = {5, 2, 6, 1, 3, 8, 9, 7, 4, 0};
    int t = sizeof(n) / sizeof(n[0]);

    printf("Vetor Original: ");
    imprimir(n, t);
    insertionSort(n, t);
    printf("\n");
    printf("Vetor Ordenado: ");
    imprimir(n, t);
    return 0;
}