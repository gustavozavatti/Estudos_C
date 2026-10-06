#include <stdio.h>
#include <stdlib.h>
int main()
{   
    char id[4];
    printf("Digite a idade: ");
    scanf("%3s", id);   
    
    int id1 = atoi(id);
    
    printf("A idade é %d -", id1);
    if(id1 >= 18){
        printf(" Maior de idade!");
    }
    else{
        printf(" Menor de idade!");
    }
    return 0;
}