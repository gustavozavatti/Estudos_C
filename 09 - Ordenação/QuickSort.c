#include <stdio.h>

void imprimirvetor(int n[], int t){
    for(int i = 0; i < t; i++){
        printf("%d ", n[i]);
    }
    return;
}

int particionar(int v[], int inicio, int fim){
    int meio = inicio + (fim - inicio) / 2;

    int temp = v[meio];
    v[meio] = v[fim];
    v[fim] = temp;

    int pivo = v[fim];
    int i = inicio - 1;

    for(int j = inicio; j < fim; j++){
        if(v[j] < pivo){
            i++;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void quickSort(int n[], int inicio, int fim){
    if(inicio < fim){
        int indicepivo = particionar(n, inicio, fim);
        quickSort(n, inicio, indicepivo - 1);
        quickSort(n, indicepivo + 1, fim);
    }
}

int main(){

   int n[] = {5, 2, 6, 1, 3, 8, 9, 7, 4, 0};
    int t = sizeof(n) / sizeof(n[0]);

    printf("Vetor Original: ");
    imprimirvetor(n, t);
    quickSort(n, 0, t - 1);
    printf("\n");
    printf("Vetor Ordenado: ");
    imprimirvetor(n, t);

    return 0;
}