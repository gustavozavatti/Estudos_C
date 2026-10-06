#include <stdio.h>
    int potencia(int n){
        if(n == 0){
            return 1;
        }
        else{         
            return 2 * potencia(n - 1);
        }
    }
int main()
{
    int s;
    printf("Digite um numero: ");
    scanf("%d", &s);
    printf("%d",potencia(s));
    return 0;
}