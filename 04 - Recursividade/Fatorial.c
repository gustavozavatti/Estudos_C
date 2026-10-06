#include <stdio.h>

int fatorial(int n){
    if(n == 1){
        return n;
    }
    else{
        return n * fatorial(n - 1);
    }

}

int main(){

    int q;

    printf("Digite um valor: ");
    scanf("%d", &q);

    printf("O fatorial e: %d", fatorial(q));

    return 0;
}