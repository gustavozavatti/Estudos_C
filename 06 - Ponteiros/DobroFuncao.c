#include <stdio.h>

void dobro(float *a) {
    *a = *a * 2;
}

int main() {
    float a;

    printf("Digite um valor: ");
    scanf("%f", &a);

    dobro(&a);

    printf("O dobro = %.2f\n", a);

    return 0;
}