#include <stdio.h>
int main(){
    
    float vt[10], t = 0;
    int q;

    printf("Quantidade de elementos: ");
    scanf("%d", &q);

    printf("Digite os elementos: ");
    for(int i = 0; i < q; i++){
        scanf("%f", &vt[i]);
        t += vt[i];
    }

    printf("Media: %.2f \n", t/q);

    printf("Valores menor que a media: ");
    for(int i = 0; i < q; i++){
        if(vt[i] < t/q){
            printf("%.2f ", vt[i]);
        }
    }

    return 0;
}