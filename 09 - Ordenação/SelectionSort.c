#include <stdio.h>

void imprimir(int n[], int t){
    for(int i = 0; i < t; i++){
        printf("%d ", n[i]);
    }
}

void selectionSort(int n[], int t){
    for(int i = 0; i < t - 1; i++){
        int m = i;

        for(int j = i + 1; j < t; j++){
            if(n[j] < n[m]){
                m = j;
            }
        }

        if(m != i){
            int temp = n[i];
            n[i] = n[m];
            n[m] = temp;
        }

    }
}

int main(){

    int n[] = {5, 2, 1, 3, 4};
    int t = sizeof(n) / sizeof(n[0]);

    printf("Vetor Original: ");
    imprimir(n, t);
    selectionSort(n, t);
    printf("\n");
    printf("Vetor Ordenado: ");
    imprimir(n, t);

    return 0;
}