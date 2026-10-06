#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, d;
    float m = 0;

    printf("Digite o numero de notas: ");
    scanf("%d", &n);

    float *l = (float *) malloc(n * sizeof(float));

    if (l == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    printf("Digite as notas:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &l[i]);
        m += l[i];
    }

    printf("Media = %.2f\n", m / n);

    printf("Deseja alterar o numero de notas? Sim(1) Nao(2): ");
    scanf("%d", &d);

    switch (d) {
        case 1:
            printf("Digite o novo numero de notas: ");
            scanf("%d", &n);
            break;

        default:
            free(l);
            return 0;
    }

    l = (float *) realloc(l, n * sizeof(float));

    if (l == NULL) {
        printf("Erro de realocacao!\n");
        return 1;
    }

    m = 0; // zera soma para recalcular

    printf("Digite as notas:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &l[i]);
        m += l[i];
    }

    printf("Media: %.2f\n", m / n);

    free(l);
    return 0;
}
