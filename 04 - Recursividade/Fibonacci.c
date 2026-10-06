#include <stdio.h>

int fibonacci(int n){
    if(n == 1 || n == 0){
        return n;
    }
    else{
        return fibonacci(n - 2) + fibonacci(n - 1);
    }

}

int main(){

    int q;

    printf("Digite um numero: ");
    scanf("%d", &q);

    printf("O fibonacci e: %d", fibonacci(q));

    return 0;
}