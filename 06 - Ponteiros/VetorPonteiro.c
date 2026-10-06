#include <stdio.h>

int main(){
    
    int vetor[5] = {1, 2, 3, 4, 5};
    int *p;
    p = vetor;
    printf("Vetor: %d\n", vetor);
    printf("Ponteiro p: %d", p+4);

    return 0;
}