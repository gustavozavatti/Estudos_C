#include <stdio.h>

int main(){

    char l;

    printf("Digite a letra: ");
    scanf("%c", &l);

    printf("Letra maiuscula: %c", l - 32);

    return 0;
}