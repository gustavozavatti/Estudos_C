#include <stdio.h>

 void quadrado(int n, char a){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c ", a);
        }
        printf("\n");
    }
}


int main()
{
    char c;
    int n; 
    printf("Digite o tamanho do quadrado e o caractere: ");
    scanf("%d %c", &n, &c);
    quadrado(n, c);
    return 0;
}