#include <stdio.h>

int main()
{
    int x[5], i, d, f;
    
    printf("Digite os números: ");
    
    for(i=0; i <= 4; i++){
        scanf("%d", &x[i]);
    }
    
    for(i=0; i <= 4; i++){
        if(10 <= x[i] && x[i] <= 20){
            d++;
        }
        else{
            f++;
        }
    }
    
    printf("Dentro: %d\n", d);
    printf("Fora: %d", f);
    
    return 0;
}