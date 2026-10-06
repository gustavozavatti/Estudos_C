#include <stdio.h>
#include <math.h>

int main()
{
    int t, tx;
    float v;
    
    printf("Digite o tempo total usado de telefone: ");
    scanf("%d", &t);
    
    if(t <= 100){
        v = 50;
        printf("O valor total é de %.2f!", v);
    }
    else{
    tx = t - 100;
    v = (tx * 2) + 50;
    printf("O valor total é de %.2f!", v);
    }
    
    return 0;
}