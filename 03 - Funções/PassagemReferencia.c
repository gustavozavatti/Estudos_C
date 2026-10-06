#include <stdio.h>

int soma(int *x, int *y) {
    *x += *y;
}

int main()
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);
    soma(&x, &y);
    
    printf("Soma: %d", x);

    return 0;
}