#include <stdio.h>

int converte(int h, int m, int s){
    int t = h * 3600 + m * 60 + s;
    return t;
}

int main(){

    int h, m, s;

    printf("Digite as horas: ");
    scanf("%d", &h);
    printf("Digite as minutos: ");
    scanf("%d", &m);
    printf("Digite as segundos: ");
    scanf("%d", &s);

    printf("Total de segundos: %d", converte(h, m, s));
    
    return 0;
}