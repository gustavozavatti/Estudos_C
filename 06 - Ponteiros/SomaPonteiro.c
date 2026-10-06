#include <stdio.h>

    int soma(int *a, int *b){
        return *a + *b;
    }

int main()
{
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d  %d", &a, &b);

    printf("Soma dos numeros: %d", soma(&a, &b));

    return 0;
}