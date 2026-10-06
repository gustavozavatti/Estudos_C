#include <stdio.h>

int main()
{
    int i, n, j, sum = 2;

    printf("Digite um número: ");
    scanf("%d", &n); 
    
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            printf("%d ", sum);
            sum += 2;
        }
        printf("\n");
    }
    
    return 0;
}