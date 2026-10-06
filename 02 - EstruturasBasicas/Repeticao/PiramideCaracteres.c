#include <stdio.h>

int main()
{
    int n, i, j, a = 1;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &n);
    
    
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            printf(" ");
        }

        for(j = 0; j < a; j++){
            printf("*");    
        }

        a += 2;
        printf("\n");
        
    }
    

    return 0;
}