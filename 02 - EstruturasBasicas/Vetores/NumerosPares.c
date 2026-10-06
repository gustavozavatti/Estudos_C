#include <stdio.h>
int main(){
    int n , np = 0;
    int vp[10];

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o numero: ");    
        scanf("%d", &vp[i]);
    }

    printf("Numeros Pares: \n");
    for(int i = 0; i < n; i++){
        if(vp[i] % 2 == 0){
            printf("%d ", vp[i]);
            np ++;
        }
    }
    printf("\n");
    printf("Quantidade de pares: %d", np);


    return 0;
}