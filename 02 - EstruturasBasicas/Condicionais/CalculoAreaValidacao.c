#include <stdio.h>
int main(){

    float bmn, bm, h;

    printf("Digite a base maior: ");
    scanf("%f", &bm);
    printf("Digite a base menor: ");
    scanf("%f", &bmn);
    printf("Digite a altura: ");
    scanf("%f", &h);

    if(bm > 0 && bmn > 0){
        printf("A area e %.2f", ((bm + bmn) * h) / 2);
    }
    else{
        printf("Valores invalidos!");
    }
    return 0;
}