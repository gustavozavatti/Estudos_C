#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n = 10, b = 0;
    int *p = malloc (n * sizeof(int));
    
    while(1){
        printf("Digite numeros (0 para parar):\n");
        for(int i = b; i < n; i++){
            scanf("%d", &p[i]);
            if(p[i] == 0){
                printf("Fim do codigo!\n");
                break;
            }
            b++;
        }
        
        if(b < n){
            break;
        }
        
        n += 10;
        int *novo = malloc(n * sizeof(int));

        for(int i = 0; i < b; i++){
            novo[i] = p[i];
        }

        free(p);
        p = novo;
    }
   
    printf("Numeros digitados:\n");
    for(int i = 0; i < b; i++){
        printf("%d ", p[i]);
    }

    free(p);
    
    return 0;
}