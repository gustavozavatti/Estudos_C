#include <stdio.h>

int main()
{
    float x[20][20], s = 0, l, c, e;

    printf("Numero de Linhas: \n");
    scanf("%f", &l);
    printf("Numero de Colunas: \n");
    scanf("%f", &c);

    printf("Digite a Matriz %.0fx%.0f: \n", l, c);
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
        scanf("%f", &x[i][j]);  
        e = l * c;
        }
    }
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
        s += x[i][j];  
        }
    }

    s = s / e;    

    printf("Media Matriz: %.2f", s);
    
    return 0;
}