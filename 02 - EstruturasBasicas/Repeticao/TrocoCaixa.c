#include <stdio.h>

int main()
{
    int q;
    float p, st = 0, p1, t;
    
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &q);
    
    while(q != 0){
        printf("Preço do produto: ");
        scanf("%f", &p);
        st = st + p;
        q--;
    }
    printf("Valor total da compra: %.2f\n", st);
    
    printf("Quantidade para pagamento: ");
    scanf("%f", &p1);
    
    if(st < p1){
        t = p1 - st;
        printf("O valor de troco é: %.2f", t);
    }
    else{
        printf("O pagamento é menor que o valor da compra!");
    }

    return 0;
}