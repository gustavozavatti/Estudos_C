#include <stdio.h>

int main()
{

    int t, t1, i, c;
    
    printf("Digite o horário de começo: ");
    scanf("%d", &t);
    printf("Digite o horário de término: ");
    scanf("%d", &t1);
    
    if(t == t1){
        i = 24;
    }
    else{
        for(i = 0; t != t1; i++){
            t++;
            if(t == 24){
            t = 0;
            }
        }
    }
    
    printf("O total de horas jogadas foi: %d", i);
    
    return 0;
}