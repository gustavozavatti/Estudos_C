#include <stdio.h>

int main()
{
    int q;
    float v, vt, d, t;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &v);
    printf("Digite a quantidade de unidades compradas: ");
    scanf("%d", &q);
    
    vt = v * q;
    
    printf("Digite o valor recebido: ");
    scanf("%f", &d);
    
    if(d > vt){
    t = d - vt;
    
    printf("Valor total da compra: %.2f\n", vt);
    printf("Troco de %.2f", t);
    }
    else{
        printf("Dinheiro Insuficiente!");
    }

    return 0;
}