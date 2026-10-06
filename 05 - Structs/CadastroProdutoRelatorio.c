#include <stdio.h>
#include <string.h>

    struct Produto{
        char nome[50];
        float peso; 
        int q;
    };

int main()
{
    struct Produto cadastros[100];
    int qp;
    
   printf("Digite a quantidade de cadastros: ");
   scanf("%d", &qp);
   
   for(int i = 0; i < qp; i++){
       printf("Produto %d: ", i + 1);
       scanf("%s", cadastros[i].nome);
       printf("Peso(em gramas): ");
       scanf("%f", &cadastros[i].peso);
       printf("Quantidade: ");
       scanf("%d", &cadastros[i].q);
   }
    printf("==================================\n");
    printf("Produtos estoque 10 a 100: \n");
    
    for(int i = 0; i < qp; i++){
        if(cadastros[i].q > 10 && cadastros[i].q < 100){
            printf("Produto: %s\n", cadastros[i].nome);    
            printf("Peso: %2.f\n", cadastros[i].peso);
            printf("Quantidade: %d\n", cadastros[i].q);
            printf("==================================\n");
        }
    }
    return 0;
}