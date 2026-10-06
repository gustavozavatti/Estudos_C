#include <stdio.h>

struct compromisso{
    char horario[10];
    int dia;
    int mes;
    char tipo[20];
};

int main(){

    struct compromisso a1;

    printf("--- Cadastro de compromisso ---\n");
    printf("Digite o dia e mes: ");
    scanf("%d %d", &a1.dia, &a1.mes);
    printf("Digite o horaio: ");
    scanf("%s", a1.horario);
    printf("Digite o tipo do compromisso: ");
    scanf("%s", a1.tipo);
    printf("\n");

    printf("Dia %d do %d:\n",a1.dia, a1.mes);
    printf("Horario: %s\n", a1.horario);
    printf("Tipo: %s\n", a1.tipo);
    return 0;
}
