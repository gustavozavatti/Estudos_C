#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, b;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    
   int *p = calloc (n, sizeof(int));
   
   printf("Digite os numeros: ");
   for(int i = 0; i < n; i++){
       scanf("%d", &p[i]);
   }
   printf("Digite numero de divisao: ");
   scanf("%d", &b);
   
   printf("Multiplos: \n");
   for(int i = 0; i < n; i++){
        if(p[i] % b == 0){
            printf("%d ", p[i]);
        }
   }
   
   free(p);
    
    return 0;
}