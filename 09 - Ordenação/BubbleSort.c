#include <stdio.h>

void imprimirvetor(int n[]){
    for(int i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
    return;
}

void blubbleSort(int n[]){
    for(int i = 1; i < 10; i++){
        for(int j = 0; j < 10 - i; j++){
            if(n[j] > n[j + 1]){
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
    return;
}

int main(){
    
    int n[10] = {0, 3, 5, 8, 9, 2, 1, 4, 6, 7};
    printf("Vetor Original: ");
    imprimirvetor(n);
    printf("\n");
    printf("Vetor Ordenado: ");
    blubbleSort(n);
    imprimirvetor(n);
    return 0;
}