#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    
   int *p = calloc (n, sizeof(int));
   
   printf("Digite os numeros: ");
   for(int i = 0; i < n; i++){
       scanf("%d", &p[i]);
   }
   printf("Numeros: ");
   for(int i = 0; i < n; i++){
       printf("%d ", p[i]);
   }
   
   free(p);
    
    return 0;
}