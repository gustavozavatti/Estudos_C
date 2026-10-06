#include <stdio.h>

int main(){

    float n, m = 0;

    printf("Digite suas notas: ");
    for(int i = 0; i < 3; i++){
        scanf("%f", &n);
        m += n;
    }
    printf("Sua media foi: %.2f", m / 3);

    return 0;
}