#include <stdio.h>

void dg(){
    int q, v[100];
    int ma = 0, me = 0, z = 0;
    printf("Digite a quantidade de numero: ");
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i < q; i++){
        if(v[i] > 0){
                ma++;    
        }
        else{
            if(v[i] == 0){
                z++;
            }
            else{
                me++;
            }
        }
    }
    
    printf("Tem %d negativos, %d positivos, %d zeros", me, ma, z);
}

int main(){
    
    dg();

    return 0;
}