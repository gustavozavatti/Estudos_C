#include <stdio.h>

int main()
{
    int at[5], m = 0;
    
    printf("Digite o dano dos ataques: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &at[i]);
    }
    
    for(int i = 0; i < 5; i++){
        if(at[i] > m){
            m = at[i];
        }
    }
    
    printf("O maior ataque é: %d ", m);

    return 0;
}