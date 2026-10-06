#include <stdio.h>

int main(){

    float n, num, dem;
    
    printf("Numero de casos: ");
    scanf("%f", &n);

    for(int i = 0; i < n; i++){
        printf("Digite dois numeros: \n");
        scanf("%f %f", &num, &dem);
        if(dem == 0){
            printf("Impossivel\n");
        }
        else{
            printf("Resultado da divisao: %.2f\n", (num/dem));
        }
        
    }
    return 0;
}