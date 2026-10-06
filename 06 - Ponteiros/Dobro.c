#include <stdio.h>

int main()
{
    float num;
    float *pnum = &num;

    printf("Digite um numero: ");
    scanf("%f", &num);
    
    *pnum = *pnum * 2;
    
    printf("Dobro: %.2f\n", num);
    
    return 0;
}