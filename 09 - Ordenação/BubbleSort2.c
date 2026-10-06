#include <stdio.h>

#define size 10

int main(){

    int flag = 1, aux;
    int vetor[size] = {5,9,2,10,3,4,1,7,8,6};

    while (flag){
        flag = 0;
        for(int i = 0; i < size - 1; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                flag = 1;
            }
        }

    }
    for(int i = 0; i < size; i++){
        printf("\nElemento %d : %d", i+1, vetor[i]);
    }    
    return 0;
}