#include <stdio.h>

int main(){

    float m = 0, v;

    printf("Digite 10 valores: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &v);
        m += v;
    }

    printf("Media: %.2f", m / 10);

    return 0;
}