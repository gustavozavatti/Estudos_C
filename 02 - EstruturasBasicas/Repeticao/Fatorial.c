#include <stdio.h>

int main()
{
    int n, fat = 1;

    printf("Qual fatorial: ");
    scanf("%d", &n);

    for (int i = n; i != 1; i--){
        fat *= i;
    }

    printf("Fatorial: %d", fat);

    return 0;
}