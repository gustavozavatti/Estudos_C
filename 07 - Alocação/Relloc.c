#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, b = 0, i;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    
    int *p = calloc (n, sizeof(int));
   
    printf("Digite os numeros: ");
    for(i = 0; i < n; i++){
       scanf("%d", &p[i]);
       if(p[i] < 0){
           break;
       }
       else{
           b++;
       }
    }
    
    p = realloc(p, b * sizeof(int));
    
    printf("Numeros antes do negativo: \n");
    for(int j = 0; j < b; j++){
        if(p[j] >= 0){
            printf("%d ", p[j]);
        }
    }
   
   free(p);
    
    return 0;
}