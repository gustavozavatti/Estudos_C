#include <stdio.h>

int main()
{
    float n1, n2, r;
    
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    
    r = n1 + n2;
    
    
    printf("Nota final: %.2f\n", r);
    if(r >= 60){
        printf("Passou de ano!");
    }
    else{
        printf("Reprovou de ano!");
    }

    return 0;
}