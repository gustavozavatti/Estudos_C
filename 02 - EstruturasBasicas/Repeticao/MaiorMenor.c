#include <stdio.h>

int main(){

    int v, M = 0, m = 1000000000;

    printf("Digite 10 valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v);
        if(v > M){
            M = v;
        }
        if(v < m){
            m = v;
        }
    }
    printf("Maior: %d Menor: %d", M, m);

    return 0;
}