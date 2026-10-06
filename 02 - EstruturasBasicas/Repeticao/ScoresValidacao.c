#include <stdio.h>

int main()
{
    int p[5], b;
    
    printf("Digite 5 scores: \n");
    for(int j = 0; j < 5; j++){
        printf("Score %d: ", j + 1);
        scanf("%d", &p[j]);
        b = p[0];
        if(b < p[j]){
            b = p[j];
            printf("Seu novo melhor score é %d!\n", b);
        }
    }
 
    return 0;
}