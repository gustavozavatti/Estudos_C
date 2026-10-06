#include <stdio.h>

char vogais(char palavra[]){
    int n;
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            n++;
        }
    }
    return n;
}


int main()
{
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    printf("A palavra tem %d vogais!", vogais(palavra));
    return 0;
}