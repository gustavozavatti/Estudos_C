#include <stdio.h>

int main()
{

    int n1, n2, b;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    if(n1 < n2){
        b = n2;
        n2 = n1;
        n1 = b;
    }
    
    if(n1 % n2 == 0){
        printf("São múltiplos!");
    }
    else{
    printf("Não são múltiplos!");
    }
    
    return 0;
}