#include <stdio.h>
#include <string.h>

int tamanho = 100;
char pilha[100];
int topo = -1;

void push(char caracter){
    if(topo == tamanho - 1){
        printf("Pilha Cheia!");
        return;
    }
    topo++;
    pilha[topo] = caracter;
}

char top(){
    if(topo == -1){
        printf("Pilha Vazia!");
        return '\0';
    }
    return pilha[topo];
}

void pop(){
    if(topo == -1){
        printf("Pilha Vazia!");
        return;
    }
    topo--;
}

int main(){
    char expressao[100];
    int b = 1;
    int n = strlen(expressao);

    printf("Digite a expressao: ");
    scanf("%s", expressao);

    for(int i = 0; i < n; i++){
        if(expressao[i] == '('){
            push('(');
        }
        else{
            if(expressao[i] == ')'){
                if(topo == -1){
                    b = 0;
                    break;
                }
                else{
                    pop();
                }
            }            
        }
    }

    if(b && topo == -1){
        printf("Expressao Balanceada!");
    }
    else{
        printf("Expressao nao Balanceada!");
    }

    return 0;
}