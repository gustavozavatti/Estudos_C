    #include <stdio.h>

    float media(float n1, float n2, float n3, char tipo){
        float m = 0;
        if(tipo == 'A'){
            m = (n1 + n2 + n3) / 3;
            return m;
        }
        else{
            m = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
            return m;
        }
    }

    int main(){

        float n1, n2, n3;
        char t;

        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        printf("Digite a nota 3: ");
        scanf("%f", &n3);

        do{
            printf("Digite o tipo de media: ");
            scanf(" %c", &t); 
        }while(t != 'A' && t != 'P');

        printf("Sua media e: %.2f", media(n1, n2, n3, t));
        return 0;
    }