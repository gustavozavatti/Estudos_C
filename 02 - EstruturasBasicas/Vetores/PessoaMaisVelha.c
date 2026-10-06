#include <stdio.h>
#include <string.h>
int main(){

    int q, mi = 0;
    char nm[20];
    char n[10][20];
    int vt[10];

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &q);

    printf("Digite os dados: \n");
    for(int i = 0; i < q; i++){
        printf("Pessoa %d: \n", i+1);
        printf("Nome: ");
        scanf(" %s", n[i]);
        printf("Idade: ");
        scanf("%d", &vt[i]);
    }
    for(int i = 0; i < q; i++){
        if(vt[i] > mi){
            mi = vt[i];
            strcpy(nm, n[i]);
        }
    }

    printf("Pessoa mais velha: %s", nm);
    return 0;
}