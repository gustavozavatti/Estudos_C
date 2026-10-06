#include <stdio.h>

int main(){
    int q;
    char vn[10][20];
    int vi[10];
    float va[10];
    float am = 0;
    int im = 0;

    printf("Quantidade de pessoas: ");
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        printf("Dados da pessoa %d: \n", i +1);
        printf("Nome: ");
        scanf("%s", vn[i]);
        printf("Idade: ");
        scanf("%d", &vi[i]);
        if(vi[i] < 16){
            im++;
        }
        printf("Altura: ");
        scanf("%f", &va[i]);
        am += va[i];
    }
    printf("Altura Media: %.2f\n", am/q);
    printf("Pessoas com menos de 16 anos: %d porcento\n", (im * 100) / q);
    for(int i = 0; i < q; i++){
        if(vi[i] < 16){
            printf("%s\n", vn[i]);
        }
    }
    return 0;
}