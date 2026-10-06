#include <stdio.h>

int main(){
    int n, q;
    int c = 0, r = 0, s = 0, t = 0;
    char tipo;

    printf("Digite a quantidade de casos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite o tipo: ");
        scanf(" %c", &tipo);
        printf("Quantidade: ");  
        scanf("%d", &q);
        if(tipo == 'C'){
            c += q; 
        }
        else{
            if(tipo == 'R'){
                r += q;
            }
            else{
                s += q;
            }
        }
        t += q;      
    }
    
    printf("Quantidade Cobras: %d\n", c);
    printf("Quantidade de Ratos: %d\n", r);
    printf("Quantidade de Sapos: %d\n", s);
    printf("Percentual de Cobras: %.2f%%\n", (c * 100.0) / t);
    printf("Percentual de Ratos: %.2f%%\n", (r * 100.0) / t);
    printf("Percentual de Sapos: %.2f%%\n", (s * 100.0) / t);
    
    return 0;
}