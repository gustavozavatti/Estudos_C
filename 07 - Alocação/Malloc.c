#include <stdio.h>
#include <stdlib.h>

int main(){
    
   int *p = malloc (5 * sizeof(int));
   
   printf("Digite 5 numeros: ");
   for(int i = 0; i < 5; i++){
       scanf("%d", &p[i]);
   }
   printf("Numeros: ");
   for(int i = 0; i < 5; i++){
       printf("%d ", p[i]);
   }
   
   free(p);
    
    return 0;
}