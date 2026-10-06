#include <stdio.h>

int main(){

    int v, t = 0;

    printf("Digite 10 valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v);
        t += v;
    }
    printf("Total: %d", t);

    return 0;
}