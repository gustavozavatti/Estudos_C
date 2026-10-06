#include <stdio.h>
int main(){
    
    int q , j = 0 , m = 0;
    float men = 10, mai = 0, mm = 0;
    float vh[10];
    char vg[10][3];

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &q);

    printf("Digite os dados: ");
    for(int i = 0; i < q; i++){
        printf("Pessoa %d: \n", i + 1);
        printf("Altura: ");
        scanf("%f", &vh[i]);
        printf("Genero: ");
        scanf(" %c", vg[i]);
    }
    for(int i = 0; i < q; i++){
        if(vh[i] < men){
            men = vh[i];
        }
        if(vh[i] > mai){
            mai = vh[i];
        }
        if(vg[i][0] == 'F'){
            mm += vh[i];
            j++;
        }
        if(vg[i][0] == 'M'){
            m++;
        }
    }

    printf("Maior altura: %.2f\n", mai);
    printf("Menor altura: %.2f\n", men);
    printf("Media altura das mulheres: %.2f\n", mm/j);
    printf("Numero de homens: %d", m);
    return 0;
}