#include <stdio.h>

float m2(float a, float b) {
    float m = (a + b) / 2;
    return m;
}

float m3(float a, float b, float c) {
    float m = (a + b + c) / 3;
    return m;
}

int main() {
    int escolha;
    float a, b, c;

    printf("Digite 2 para media de 2 numeros\n");
    printf("Digite 3 para media de 3 numeros\n");
    scanf("%d", &escolha);

    if (escolha == 2) {
        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);
        printf("%.2f\n", m2(a, b));
    } else {
        printf("Digite tres numeros: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("%.2f\n", m3(a, b, c));
    }

    return 0;
}
