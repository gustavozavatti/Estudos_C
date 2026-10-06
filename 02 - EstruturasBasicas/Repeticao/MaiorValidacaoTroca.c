#include <stdio.h>

int main(){

     int v, M = 0, t = 0, q;

    printf("Digite quantidade de valores: ");
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d", &v);
        if(v > M){
            M = v;
            t++;
        }
    }
    printf("Maior: %d Troca: %d", M, t);

    return 0;
}