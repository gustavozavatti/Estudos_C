#include <stdio.h>

void troca(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 0, b = 0;

    printf("Digite dois valores: ");
    scanf("%d", &a);
    scanf("%d", &b);

    troca(&a, &b);

    printf("A: %d B: %d", a, b);

    return 0;
}