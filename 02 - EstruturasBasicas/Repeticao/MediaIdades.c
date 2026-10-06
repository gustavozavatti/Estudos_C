#include <stdio.h>

int main()
{
    int x, i= 0;
    float m = 0;
    
    while(x != 0){
        printf("Digite a idade: ");
        scanf("%d", &x);
        m = m + x;
        i++;
    }
    
    i -= 1;
    m = m / i;
    
    if(i > 0){
        printf("A média das idade e %.2f", m);
    }
    else{
        printf("Impossível Calcular!");
    }

    return 0;
}