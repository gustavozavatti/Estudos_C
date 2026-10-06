#include <stdio.h>

int main(){

    int hc, mc, sc;
    int hd, md, sd;
    int t;

    printf("Digite o horario do inicio do experimento!\n");
    printf("Hora: ");
    scanf("%d", &hc);
    printf("Minutos: ");
    scanf("%d", &mc);
    printf("Segundos: ");
    scanf("%d", &sc);
    
    t = hc * 3600 + mc * 60 + sc;

    printf("Digite o tempo total da duracao!\n");
    printf("Hora: ");
    scanf("%d", &hd);
    printf("Minutos: ");
    scanf("%d", &md);
    printf("Segundos: ");
    scanf("%d", &sd);

    t += hd * 3600 + md * 60 + sd;

    printf("Horario de fim do experimento!\n");

    hd = t / 3600;
    t -= hd * 3600;
    md = t / 60;
    t -= md * 60;


    hd = hd % 24;

    printf("Hora: %d\n", hd);
    printf("Minutos: %d\n", md);
    printf("Segundos: %d\n", t);

    return 0;

}