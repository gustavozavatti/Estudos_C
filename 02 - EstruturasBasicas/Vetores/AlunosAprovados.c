#include <stdio.h>
int main(){
    
    int q;
    float m = 0;
    float vtn1[10], vtn2[10];
    char nomes[10][20];

    printf("Quantidade de alunos: ");
    scanf("%d", &q);

    printf("Digite os dados: \n");
    for(int i = 0; i < q; i++){
        printf("Aluno %d: \n", i + 1);
        printf("Nome: ");
        scanf(" %s", nomes[i]);
        printf("Nota 1: ");
        scanf("%f", &vtn1[i]);
        printf("Nota 2: ");
        scanf("%f", &vtn2[i]);
    }

    printf("Alunos aprovados: \n");
    for(int i = 0; i < q; i++){
        m = (vtn1[i] + vtn2[i]) / 2;
        if(m >= 6.0){
            printf("%s ", nomes[i]);
        }
    }



}