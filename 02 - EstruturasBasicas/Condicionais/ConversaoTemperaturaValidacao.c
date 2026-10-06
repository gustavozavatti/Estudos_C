#include <stdio.h>

int main()
{

    char t;
    float c, f;
    
    printf("Digite a escala de temperatura que será usada: ");
    scanf("%c", &t);
    
    if(t == 'c'  || t == 'C' || t == 'F' || t == 'f'){
        if(t == 'c'  || t == 'C'){
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &c);
            f = c * (9.0 / 5.0) + 32;
            printf("A temperatura em F é: %.2f!", f);
        }
        else{
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &f);
            c = (5.0 / 9.0) * (f - 32); 
            printf("A temperatura em C é: %.2f!", c);
        }
    }

    return 0;
}