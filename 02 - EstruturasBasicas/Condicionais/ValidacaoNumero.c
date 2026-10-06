#include <stdio.h>

int main()
{
    int x;
    
    printf("Digite um número: ");
    scanf("%d", &x);

    if(0 > x && x % 2 != 0){
        printf("Ímpar Negativo!");    
    }
    else{
        if(0 > x && x % 2 == 0){
            printf("Par Negativo!");    
        }
        else{
            if(0 < x && x % 2 == 0){
                printf("Par Positivo!");    
            }
            else{
                if(0 < x && x % 2 != 1){
                    printf("Ímpar Positivo!");    
                }
                else{
                    printf("Nulo!");    
                }
            }
        }
    }

    
    return 0;
}