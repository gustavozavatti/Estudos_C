#include <stdio.h>
#include <string.h>

char fila[5][50];
int inicio = 0, fim = 0;

void enqueue(char nome[]){
    if(fim == 5){
        printf("Fila Cheia!\n");
        return;
    }
    strcpy(fila[fim++], nome);
}

void dequeue(){
    if(inicio == fim){
        printf("Fila Vazia!\n");
        return;
    }
    printf("Atendendo: %s\n", fila[inicio]);
    for(int i = 0; i < fim - 1; i ++){
        strcpy(fila[i], fila[i + 1]);
    }
    fim--;
}

void mostarfila(){
    if(inicio == fim){
        printf("Fila Vazia!\n");
        return;
    }
    printf("\nFila atual: \n");
    for(int i = inicio; i < fim; i++){
        printf("%d -- %s", i + 1, fila[i]);
    }
}

int main(){

    int op;
    char nome[50];

    do{
        printf("\n1) Inserir Cliente!\n");
        printf("2) Atender Cliente!\n");
        printf("3) Mostrar Fila!\n");
        printf("4) Sair!\n");
        printf("Press: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("Nome do cliente: ");
                scanf(" %[^\n]", nome);
                enqueue(nome);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                mostarfila();
                break;
        }

    }while(op != 4);

    printf("Fim do programa!");
    return 0;
}