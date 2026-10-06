#include <stdio.h>

int somatorio(int n){
    if(n == 0){
        return n;
    }
    else{
        return n + somatorio(n - 1);
    }

}

int main(){

    int q;

    printf("Digite um valor: ");
    scanf("%d", &q);

    printf("O somatorio e: %d", somatorio(q));

    return 0;
}