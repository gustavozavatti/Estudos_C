#include <stdio.h>

int main(){

    int q, s = 0;

    printf("Digite ate qual numero quer chegar: ");
    scanf("%d", &q);

    for(int i = 0; i <= q; i++){
        s += i;
    }

    printf("Soma total e: %d", s);

    return 0;
}