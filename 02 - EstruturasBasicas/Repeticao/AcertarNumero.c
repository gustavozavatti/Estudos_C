#include <stdio.h>

int main()
{
    int n, b = 7;
    
    do{
        printf("Digite um número de 1 a 10: ");
        scanf("%d", &n);
        
    }while(n != b);
   
    
    printf("Parabém você acertou o número!");

    return 0;
}