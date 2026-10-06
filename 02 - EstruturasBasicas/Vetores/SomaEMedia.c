#include <stdio.h>
int main(){
    int n;
    float v[10], t = 0;

    printf("Digite a quantidade de entradas: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%f", &v[i]);
        t += v[i];
    }

    printf("Soma total: %.2f", t);
    printf("Media: %.2f\n", t/n);

    return 0;
}