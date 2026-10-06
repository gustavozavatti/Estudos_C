#include <stdio.h>

int main(){

    int i, c;

    printf("Digite sua idade: ");
    scanf("%d", &i);
    printf("Digite seu tempo de contribuicao: ");
    scanf("%d", &c);

    if(i >= 65 || c >= 30 || (i >= 60 && c >= 25)){
        printf("Aposentado!");
    }
    else{
        printf("Nao esta aposentado!");
    }

    return 0;
}