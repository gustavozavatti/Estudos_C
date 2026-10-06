#include <stdio.h>

void apareceu(int x[], int q){
    int a = 0, na = 0, m = 0; 
    for(int i = 0; i < q; i++){
        for(int j = 0; j < q; j++){
            if(x[i] == x[j]){
                a++;
            }
        }
        if(a > m){
            na = x[i];
            m = a;
        }
        a = 0;
    }
    printf("O numero %d apareceu %d vezes!", na, m);
}

int main()
{
    int v[1000], n;
    int *p = v;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    printf("Digite os numeros: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }
    
    apareceu(p, n);

    return 0;
}