#include <stdio.h>
#include <stdlib.h>
int main()
{   
    char t[10];
    printf("Digite a temperatura: ");
    scanf("%s", t);   
    
    float tr = atof(t);
    
    printf("A temperatura é %.2f -", tr);
    if(tr > 26){
        printf(" Quente!");
    }
    else{
        if(tr >= 18 && tr <= 26){
            printf(" Agradável!");
        }
        else{
            printf(" Frio!");
        }
    }
    return 0;
}