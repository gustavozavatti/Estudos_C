#include <stdio.h>

int main()
{
    float banco[2][3];
    float total = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Agência %d, Dia %d: ", i + 1, j + 1);
            scanf("%f", &banco[i][j]);
            total += banco[i][j];
        }
    }
    
    printf("Total arrecadado: %.2f", total);

    return 0;
}