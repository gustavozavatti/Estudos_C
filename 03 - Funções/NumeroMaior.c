#include <stdio.h>

int maior(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }    
    else{
        if(b > a && b > c){
            return b; 
        }
        else{
            return c;    
        }
    }
}


int main()
{
    int a, b, c;
    
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("O maior número é %d!", maior(a,b,c));
    return 0;
}