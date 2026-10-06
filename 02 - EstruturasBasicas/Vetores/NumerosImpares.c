#include <stdio.h>

int main(){

    int v[10], in[10], j = 0;

    printf("Digite 10 numeros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

     for(int i = 0; i < 10; i++){
        if(v[i] % 2 == 1){
            in[j] = v[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++){
        printf("%d ", in[i]);
    }

    return 0;
}