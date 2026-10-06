#include <stdio.h>
#include <string.h>

int main(){

    float v;
    char l[3];

    printf("Digite o valor da carga: ");
    scanf("%f", &v);
    printf("Digite o estado: ");
    scanf("%2s", l);

if(strcmp(l, "MG")== 0){
    v = v * 1.07;
}
else{
    if(strcmp(l, "SP") == 0){
        v = v * 1.12;
    }
    else{
        if(strcmp(l, "RJ") == 0){
            v = v * 1.15;
        }
        else{
            v = v * 1.08;
        }
    }
}

    printf("O valor com a taxa e %.2f", v);

    return 0;
}