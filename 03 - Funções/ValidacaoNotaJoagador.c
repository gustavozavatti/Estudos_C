#include <stdio.h>

float media(int a, int b, int c){
    return (a + b + c)/3;
}

void class(float m){
    if(m >= 9){
        printf("Exelente!");
    }
    else{
        if(m >= 7){
            printf("Bom!");
        }
        else{
            if(m >= 5){
                printf("Regular!");
            }
            else{
                printf("Ruim!");
            }
        }
    }
}


int main()
{
    int a, b, c;
    
    for(int i = 0; i < 5; i++){
        printf("Notas jogador %d: ", i + 1);
        scanf("%d %d %d", &a, &b, &c);
        printf("A média é: %.2f! ", media(a,b,c));
        class(media(a,b,c));
        printf("\n");
        printf("\n");
    }
    
    return 0;
}