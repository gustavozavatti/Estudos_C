#include <stdio.h>

int fatorial(int n){
    int s = 1;
    for(int i = n; i > 0; i--){
        s *= i;
    }
    return s;
}

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial: %d", fatorial(n));
    
    return 0;
}