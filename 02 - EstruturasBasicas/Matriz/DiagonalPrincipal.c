#include <stdio.h>

int main(){

    int n , neg = 0;
    int m[10][10];

    printf("Qual a ordem da matriz: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz: \n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
            if(m[i][j] < 0){
                neg++;
            }
        }
    }
    printf("Diagonal principal: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                printf("%d ", m[i][j]);
            }
        }
    }
    printf("\nQuantidade de negativos: %d", neg);
    return 0;
}