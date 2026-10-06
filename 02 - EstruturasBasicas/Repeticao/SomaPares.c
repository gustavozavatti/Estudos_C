#include <stdio.h>

int main()
{
    int n, r = 0, i = 0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    while(i != 5){
    if(n % 2 == 0){
        r += n;
        i++;
    }
    n++;
    }
    
    printf("%d", r);

    return 0;
}