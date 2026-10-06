#include <stdio.h>

int main(){
    char letra;
    char *pletra = &letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("Sem ponteiro: %c\n", letra);
    *pletra = 'B';
    printf("Com ponteiro: %c\n", *pletra);
    printf("Endereco Letra: %p\n", &letra);
    printf("Endereco Ponteiro: %p\n", &pletra);
}