#include <stdio.h>

int main()
{
    const char *pr2, *pr1;
    char genero;
    int idade, codigo;
    float p1, p2;
    
    pr1 = "Computador";
    pr2 = "TV";
    genero = 'F';
    idade = 30;
    codigo = 5291;
    p1 = 2100.5;
    p2 = 1830.0;
    
    printf("O %s custa %0.2f e o %s custa %0.2f!", pr1, p1, pr2, p2);
    printf("\n");
    printf("O código é %d!", codigo);
    printf("\n");
    printf("Gênero é %c e tem a idade %d.", genero, idade);
    return 0;
}