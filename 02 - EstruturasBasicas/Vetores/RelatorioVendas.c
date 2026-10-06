#include <stdio.h>

int main(){

    int q;
    int md = 0, dv = 0, mv = 0;
    float tc = 0, tv = 0, p = 0;
    float pc[10], pv[10];
    char vp[10][20];

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &q);

    printf("Digite os dados: \n");
    for(int  i = 0; i < q; i++){
        printf("Nome: ");
        scanf(" %s", vp[i]);
        printf("Preco de Compra: ");
        scanf("%f", &pc[i]);
        printf("Preco de Venda: ");
        scanf("%f", &pv[i]);
        tc += pc[i];
        tv += pv[i];
    }

    
    for(int  i = 0; i < q; i++){
        p = ((pv[i] - pc[i]) / pc[i]) * 100;
        if(p < 10){
            md++;
        }
        else{
            if( p >= 10 && p <= 20){
                dv++;
            }
            else{
                mv++;
            }
        }
    }
    printf("RELATORIO: \n");
    printf("Ganho de menos de 10: %d\n", md);
    printf("Ganho entre 10 e 20: %d\n", dv);
    printf("Ganho de mais de 20: %d\n", mv);
    printf("Valor total da compra: %.2f\n", tc);
    printf("Valor total da venda: %.2f\n", tv);
    printf("Lucro: %.2f", tv - tc);


    return 0;
}