#include <stdio.h>

int main() {

    int x[5];
    int i, b = 0;

    printf("Digite 5 numeros:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &x[i]);
    }

    printf("\nPositivos:\n");
    for(i = 0; i < 5; i++){
        if(x[i] > 0){
            printf("%d\n", x[i]);
        }
    }

    printf("\nNegativos:\n");
    for(i = 0; i < 5; i++){
        if(x[i] < 0){
            printf("%d\n", x[i]);
        }
    }

    for(i = 0; i < 5; i++){
        if(x[i] == 0){
            b++;
        }
    }

    printf("\nContem %d zero(s)!\n", b);

    return 0;
}
