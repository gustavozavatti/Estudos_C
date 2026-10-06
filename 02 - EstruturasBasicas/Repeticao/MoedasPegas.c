#include <stdio.h>

int main()
{
    int n, b= 0, i = 1;
    
    while(b < 100){
        printf("Digite quantas moedas você pegou na rodada %d: ", i);
        scanf("%d", &n);
        b += n; 
        i++;
    }
    
    printf("Você pegou %d moedas em %d rodadas.", b, i);

    return 0;
}