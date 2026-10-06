#include <stdio.h>

int main()
{
    int i, n, j;

    printf("Digite um número: ");
    scanf("%d", &n); 
    
    for(i = n; i > 0; i--){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
         printf("\n");
    }
    
    return 0;
}