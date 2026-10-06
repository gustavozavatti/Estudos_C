#include <stdio.h>

int main(){

    int v[10], c = 0, s = 0;

    printf("Digite 10 numeros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("Numeros repetidos: ");
    for(int i = 0; i < 10; i++){
        c = v[i];
        s = 0; 
        
        for(int k = 0; k < i; k++){
            if(v[k] == c){
                s = 1;
                break;
            }
        }

        if(s == 0){  
            int cont = 0;
            for(int j = 0; j < 10; j++){
                if(c == v[j]){
                    cont++;
                }
            }

            if(cont > 1){
                printf("%d ", c);
            }
        }
    }

    return 0;
}
